#include <stdio.h>
#include <stdlib.h>
#define MAX 200

typedef struct Node {
    int a, b, c;
    struct Node *l;
} Node;

typedef struct {
    int l;
    Node *f, *r;
} Queue;

Queue *createQueue(void);
Node *createNode(int a, int b, int c);
void push(Queue *qu, int a, int b, int c);
Node pop(Queue *qu);
int max(int a, int b) { return a > b ? a : b; };
int min(int a, int b) { return a < b ? a : b; };

int v[MAX+1][MAX+1][MAX+1], l, r[MAX+1];

int main(void) {
    Queue *qu;
    Node n;
    int a, b, c, x, y, z;
    qu = createQueue();
    scanf("%d %d %d", &a, &b, &c);
    push(qu, 0, 0, c);
    while(qu->l) {
        n = pop(qu);
        x = n.a, y = n.b, z = n.c;
        if(!x) r[z] = 1;
        push(qu, max(0, x-b+y), min(x+y, b), z);
        push(qu, max(0, x-c+z), y, min(x+z, c));
        push(qu, min(x+y, a), max(0, y-a+x), z);
        push(qu, x, max(0, y-c+z), min(y+z, c));
        push(qu, min(x+z, a), y, max(0, z-a+x));
        push(qu, x, min(y+z, b), max(0, z-b+y));
    }
    for(int i=0; i<=MAX; i++) {
        if(r[i]) printf("%d ", i);
    }
    return 0;
}

Queue *createQueue(void) {
    Queue *qu = (Queue *)malloc(sizeof(Queue));
    qu->l = 0;
    qu->f = qu->r = NULL;
    return qu;
}

Node *createNode(int a, int b, int c) {
    Node *n = (Node *)malloc(sizeof(Node));
    n->a = a, n->b = b, n->c = c;
    n->l = NULL;
    return n;
}

void push(Queue *qu, int a, int b, int c) {
    if(v[a][b][c]) return;
    Node *n = createNode(a, b, c);
    if(!qu->l) qu->f = qu->r = n;
    else qu->r->l = n, qu->r = n;
    v[a][b][c] = 1;
    qu->l++;
}

Node pop(Queue *qu) {
    Node r=*qu->f, *t=qu->f;
    qu->l--;
    if(qu->l) qu->f = qu->f->l;
    else qu->f = qu->r = NULL;
    free(t);
    return r;
}