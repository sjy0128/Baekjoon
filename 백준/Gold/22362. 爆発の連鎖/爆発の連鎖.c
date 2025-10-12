#include <stdio.h>
#include <stdlib.h>
#define MAX 100

typedef struct { int x, y; } Point;
typedef struct {
    Point e[MAX];
    int f, r;
} Queue;

Queue qu;
int w, h, m[MAX][MAX], c;

Queue *createQueue(void);
void insert(Queue *qu, Point e);
Point pop(Queue *qu);
int isEmpty(Queue *qu);
void explode(Queue *qu, int d);
int judge(Point p);

int main(void) {
    int n, d, b, x, y;
    Queue *qu;
    while(1) {
        scanf("%d %d %d %d %d", &w, &h, &n, &d, &b);
        if(!w && !h && !n && !d && !b) break;
        qu = createQueue();
        for(int i=0; i<w; i++) {
            for(int j=0; j<h; j++) m[i][j] = 0;
        }
        for(int i=0; i<n; i++) {
            scanf("%d %d", &x, &y);
            m[x-1][y-1] = 1;
            if(i == b-1) insert(qu, (Point){x-1, y-1});
        }
        c = 1;
        while(!isEmpty(qu)) explode(qu, d);
        free(qu);
        printf("%d\n", c);
    }
    return 0;
}

Queue *createQueue(void) {
    Queue *qu = (Queue *)malloc(sizeof(Queue));
    qu->f = 0;
    qu->r = -1;
    return qu;
}

void insert(Queue *qu, Point p) {
    m[p.x][p.y] = 0;
    qu->e[++qu->r] = p;
}

Point pop(Queue *qu) {
    return qu->e[qu->f++];
}

int isEmpty(Queue *qu) {
    return qu->f > qu->r;
}

void explode(Queue *qu, int d) {
    int dx[]={0, 1, 0, -1}, dy[]={1, 0, -1, 0}, x, y;
    Point t, b=pop(qu);
    for(int i=1; i<=d; i++) {
        for(int j=0; j<4; j++) {
            t.x = b.x+dx[j]*i, t.y = b.y+dy[j]*i;
            if(judge(t)) {
                insert(qu, t);
                c++;
            }
        }
    }
}

int judge(Point p) {
    return p.x >= 0 && p.x < w && p.y >= 0 && p.y < h && m[p.x][p.y];
}