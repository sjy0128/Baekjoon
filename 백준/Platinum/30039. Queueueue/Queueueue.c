#include <stdio.h>
#include <stdlib.h>

typedef struct Node {
    int d;
    struct Node *p, *n;
} Node;

typedef struct {
    int n;
    Node *f, *r, *m;
} Queue;

typedef struct {
    Queue *hq, *vq;
} Queueueue;

Queueueue *createQueueueue(void);
Node *createNode(int d);

void initQueue(Queue *q);
void push(Queue *q, Node *n);
void pop(Queueueue *qu, Queue *q1, Queue *q2);
void middleRenew(Queueueue *qu, Queue *q);
void println(int n);

void vpush(Queueueue *q, int x);
void hpush(Queueueue *q, int x);
void hpop(Queueueue *q);
void vpop(Queueueue *q);
void hfront(Queueueue *q);
void vfront(Queueueue *q);
void hback(Queueueue *q);
void vback(Queueueue *q);
void hsize(Queueueue *q);
void vsize(Queueueue *q);
void size(Queueueue *q);
void empty(Queueueue *q);
void middle(Queueueue *q);

void commend(Queueueue *q, char *c);

int main(void) {
    int n;
    char c[7];
    Queueueue *q = createQueueueue();
    scanf("%d", &n);
    while(n--) {
        scanf("%s", c);
        commend(q, c);
    }
    return 0;
}

Queueueue *createQueueueue(void) {
    Queueueue *q = (Queueueue *)malloc(sizeof(Queueueue));
    Queue *hq = (Queue *)malloc(sizeof(Queue));
    Queue *vq = (Queue *)malloc(sizeof(Queue));
    initQueue(hq);
    initQueue(vq);
    q->hq = hq;
    q->vq = vq;
    return q;
}

Node *createNode(int d) {
    Node *n = (Node *)malloc(sizeof(Node));
    n->d = d;
    n->p = n->n = NULL;
    return n;
}

void initQueue(Queue *q) {
    q->f = q->r = q->m = NULL;
    q->n = 0;
}

void push(Queue *q, Node *n) {
    if(q->n) n->p = q->r, q->r->n = n;
    else q->f = q->m = n;
    q->r = n;
    q->n++;
}

void pop(Queueueue *qu, Queue *q1, Queue *q2) {
    Node *n = q1->f, *t;
    if(!n) {
        println(-1);
        return;
    }
    if(q1->n == 1 && q2->n == 1) {
        q2->n--;
        initQueue(q1);
        initQueue(q2);
    } else {
        q1->f = q1->f->n;
        q1->n--;
        if(!q1->n) {
            if(q2->n >= 3) {
                q2->m->p->n = q2->m->n;
                q2->m->n->p = q2->m->p;
                q2->m = q2->n % 2 ? q2->m->p : q2->m->n;
            } else {
                q2->m = q2->m->n;
                q2->f = q2->r = q2->m;
            }
            q2->n--;
            push(q1, createNode(q2->m->d));
        } else {
            q1->f->p = NULL;
            if(q1->n % 2) middleRenew(qu, q1);
        }
    }
    println(n->d);
    free(n);
}

void middleRenew(Queueueue *qu, Queue *q) {
    q->m = q->n == 1 ? q->r : q->m->n;
    qu->hq->m->d = qu->vq->m->d = q->m->d;
}

void println(int n) { printf("%d\n", n); }

void hpush(Queueueue *q, int x) {
    Queue *hq = q->hq;
    if(!hq->n) push(q->vq, createNode(x));
    push(hq, createNode(x));
    if(hq->n % 2) middleRenew(q, hq);
}

void vpush(Queueueue *q, int x) {
    Queue *vq = q->vq;
    if(!vq->n) push(q->hq, createNode(x));
    push(vq, createNode(x));
    if(vq->n % 2) middleRenew(q, vq);
}

void hpop(Queueueue *q) { pop(q, q->hq, q->vq); }

void vpop(Queueueue *q) { pop(q, q->vq, q->hq); }

void hfront(Queueueue *q) { println(q->hq->n ? q->hq->f->d : -1); }

void vfront(Queueueue *q) { println(q->vq->n ? q->vq->f->d : -1); }

void hback(Queueueue *q) { println(q->hq->n ? q->hq->r->d : -1); }

void vback(Queueueue *q) { println(q->vq->n ? q->vq->r->d : -1); }

void hsize(Queueueue *q) { println(q->hq->n); }

void vsize(Queueueue *q) { println(q->vq->n);}

void size(Queueueue *q) { println(!q->hq->n ? 0 : q->hq->n + q->vq->n - 1); }

void empty(Queueueue *q) { println(!q->hq->n); }

void middle(Queueueue *q) { println(q->hq->n ? q->hq->m->d : -1); }

void commend(Queueueue *q, char *c) {
    int x;
    switch(c[2]) {
        case 'u':
            scanf("%d", &x);
            if(c[0] == 'h') hpush(q, x);
            else vpush(q, x);
            break;
        case 'o':
            if(c[0] == 'h') hpop(q);
            else vpop(q);
            break;
        case 'r':
            if(c[0] == 'h') hfront(q);
            else vfront(q);
            break;
        case 'a':
            if(c[0] == 'h') hback(q);
            else vback(q);
            break;
        case 'i':
            if(c[0] == 'h') hsize(q);
            else vsize(q);
            break;
        case 'z': size(q); break;
        case 'p': empty(q); break;
        case 'd': middle(q); break;
    }
}