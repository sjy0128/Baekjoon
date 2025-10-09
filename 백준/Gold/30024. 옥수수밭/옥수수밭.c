#include <stdio.h>
#include <stdlib.h>
#define MAX 1000

typedef struct {
    int x, y, p;
} Corn;

typedef struct {
    int s;
    Corn e[MAX*MAX+1];
} PQ;

int M[MAX][MAX];
int n, m;

PQ *createPQ(void);
void insert(PQ *pq, Corn e);
Corn pop(PQ *pq);
void harvest(PQ *pq);
void swap(Corn *a, Corn *b);
int judge(int x, int y);

int main(void) {
    int k;
    PQ *pq = createPQ();
    scanf("%d %d", &n, &m);
    for(int i=0; i<n; i++) {
        for(int j=0; j<m; j++) {
            scanf("%d", &M[i][j]);
            if(!i || !j || i == n-1 || j == m-1) insert(pq, (Corn){i, j, M[i][j]});
        }
    }
    scanf("%d", &k);
    while(k--) harvest(pq);
    free(pq);
    return 0;
}

PQ *createPQ(void) {
    PQ *pq = (PQ *)malloc(sizeof(PQ));
    pq->s = 0;
    return pq;
}

void insert(PQ *pq, Corn e) {
    int i = ++pq->s;
    M[e.x][e.y] = 0;
    while(i > 1 && e.p > pq->e[i/2].p) {
        pq->e[i] = pq->e[i/2];
        i /= 2;
    }
    pq->e[i] = e;
}

Corn pop(PQ *pq) {
    Corn e = pq->e[1];
    int m, l, r, i = 1;
    pq->e[1] = pq->e[pq->s--];
    while(1) {
        m = i, l = i*2, r = i*2+1;
        if(l <= pq->s && pq->e[l].p > pq->e[m].p) m = l;
        if(r <= pq->s && pq->e[r].p > pq->e[m].p) m = r;
        if(m == i) break;
        swap(&pq->e[i], &pq->e[m]);
        i = m;
    }
    return e;
}

void harvest(PQ *pq) {
    int dx[] = {1, 0, -1, 0}, dy[] = {0, 1, 0, -1}, x, y;
    Corn c = pop(pq);
    printf("%d %d\n", c.x+1, c.y+1);
    for(int d=0; d<4; d++) {
        x = c.x+dx[d], y = c.y+dy[d];
        if(judge(x, y)) insert(pq, (Corn){x, y, M[x][y]});
    }
}

void swap(Corn *a, Corn *b) {
    Corn t = *a;
    *a = *b;
    *b = t;
}

int judge(int x, int y) {
    return x >= 0 && y >= 0 && x < n && y < m && M[x][y];
}