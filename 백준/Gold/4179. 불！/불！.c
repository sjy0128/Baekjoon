#include <stdio.h>
#include <stdlib.h>
#define MAX 1000

typedef struct {
    int x, y;
} Point;

typedef struct {
    Point e[MAX*MAX];
    int f, r;
} Queue;

int r, c;
int dx[]={-1, 0, 1, 0};
int dy[]={0, -1, 0, 1};
int v[MAX][MAX];
char m[MAX][MAX+1];

Queue *createQueue(void);
void initQueue(Queue *q);
void enqueue(Queue *q, int x, int y);
void dequeue(Queue *q);
int isEmpty(Queue *q);
int process(Queue *q, int s, int e, char a);
int judge(int x, int y, char t);

int main(void) {
    int t;
    Queue *f, *j;
    f = createQueue();
    j = createQueue();
    scanf("%d %d", &r, &c);
    for(int i=0; i<r; i++) scanf("%s", m[i]);
    for(int i=0; i<r; i++) {
        for(int k=0; k<c; k++) {
            if(m[i][k] == 'J') enqueue(j, i, k);
            if(m[i][k] == 'F') enqueue(f, i, k);
        }
    }
    while(!isEmpty(j)) {
        process(f, f->f, f->r-1, 'F');
        t = process(j, j->f, j->r-1, 'J');
        if(t) break;
    }
    if(t) printf("%d", t);
    else printf("IMPOSSIBLE");
    return 0;
}

Queue *createQueue(void) {
    Queue *q = (Queue *)malloc(sizeof(Queue));
    initQueue(q);
    return q;
}

void initQueue(Queue *q) {
    q->f = q->r = 0;
}

void enqueue(Queue *q, int x, int y) {
    Point p = {x, y};
    q->e[q->r++] = p;
}

void dequeue(Queue *q) {
    q->f++;
}

int isEmpty(Queue *q) {
    return q->f == q->r;
}

int process(Queue *q, int s, int e, char a) {
    int x, y, cx, cy;
    for(int i=s; i<=e; i++) {
        x = q->e[q->f].x, y = q->e[q->f].y;
        if(a == 'J' && (!x || x == r-1 || !y || y == c-1)) return v[x][y] + 1;
        dequeue(q);
        for(int d=0; d<4; d++) {
            cx = x+dx[d], cy = y+dy[d];
            if(judge(cx, cy, a)) {
                if(a == 'J') v[cx][cy] = v[x][y] + 1;
                m[cx][cy] = a;
                enqueue(q, cx, cy);
            }
        }
    }
    return 0;
}

int judge(int x, int y, char t) {
    return x >= 0 && x < r && y >= 0 && y < c && (t == 'F' || !v[x][y]) && (m[x][y] == 'J' || m[x][y] == '.');
}