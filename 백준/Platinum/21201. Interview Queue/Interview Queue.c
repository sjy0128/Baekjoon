#include <stdio.h>
#include <stdlib.h>
#define MAX 100000

typedef struct Node {
    int d;
    struct Node *l, *r;
} Node;

typedef struct {
    Node *f, *r;
} List;

typedef struct {
    Node *e[MAX];
    int f, r;
} Queue;

Node *createNode(int d);
List *createList(void);
Queue *createQueue(void);
void initList(List *l, int n, int *v);
void initQueue(Queue *q);
void append(List *l, int d);
void removeItem(List *l, Node *n);
void push(Queue *q, Node *n);
void process(List *l, Queue *q, Queue *q2);
int willLeave(Node *n);

int main(void) {
    int n, v[MAX];
    List *l = createList();
    Queue *q = createQueue();
    Queue *q2 = createQueue();
    scanf("%d", &n);
    for(int i=0; i<n; i++) scanf("%d", &v[i]);
    l = createList();
    initList(l, n, v);
    process(l, q, q2);
    free(l);
    free(q);
    free(q2);
    return 0;
}

Node *createNode(int d) {
    Node *n = (Node *)malloc(sizeof(Node));
    n->d = d;
    n->l = n->r = NULL;
    return n;
}

List *createList(void) {
    List *l = (List *)malloc(sizeof(List));
    l->f = l->r = NULL;
    return l;
}

Queue *createQueue(void) {
    Queue *q = (Queue *)malloc(sizeof(Queue));
    initQueue(q);
    return q;
}

void initList(List *l, int n, int *v) {
    for(int i=0; i<n; i++) append(l, v[i]);
}

void initQueue(Queue *q) {
    q->f = 0;
    q->r = -1;
}

void append(List *l, int d) {
    Node *n = createNode(d);
    if(!l->r) l->f = n;
    else {
        l->r->r = n;
        n->l = l->r;
    }
    l->r = n;
}

void removeItem(List *l, Node *n) {
    if(n->l) n->l->r = n->r ? n->r : NULL;
    else l->f = n->r ? n->r : NULL;
    if(n->r) n->r->l = n->l ? n->l : NULL;
    else l->r = n->l ? n->l : NULL;
    free(n);
    n = NULL;
}

void push(Queue *q, Node *n) {
    q->e[++q->r] = n;
}

void process(List *l, Queue *q, Queue *q2) {
    int p[200000], s=0, c=0;
    for(Node *n = l->f; n; n = n->r) {
        if(willLeave(n)) push(q, n);
    }
    while(q->f <= q->r) {
        for(int i=q->f; i<=q->r; i++) {
            p[s++] = q->e[i]->d;
            if((q2->r == -1 || q2->e[q2->r] != q->e[i]->l) && (!i || q->e[i-1] != q->e[i]->l)) push(q2, q->e[i]->l);
            if(i == q->r || q->e[i+1] != q->e[i]->r) push(q2, q->e[i]->r);
        }
        while(q->f <= q->r) removeItem(l, q->e[q->f++]);
        initQueue(q);
        while(q2->f <= q2->r) {
            if(willLeave(q2->e[q2->f])) push(q, q2->e[q2->f]);
            q2->f++;
        }
        c++;
        initQueue(q2);
        p[s++] = -1;
    }
    for(Node *n = l->f, *t; n; n = t) {
        p[s++] = n->d;
        t = n->r;
        removeItem(l, n);
    }
    printf("%d\n", c);
    for(int i=0; i<s; i++) {
        if(p[i] == -1) printf("\n");
        else printf("%d ", p[i]);
    }
}

int willLeave(Node *n) {
    if(!n) return 0;
    return (n->l && n->l->d > n->d) || (n->r && n->r->d > n->d);
}