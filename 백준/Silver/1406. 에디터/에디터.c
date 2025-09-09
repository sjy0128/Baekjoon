#include <stdio.h>
#include <stdlib.h>

typedef struct Node {
    char d;
    struct Node *l, *r;
} Node;

typedef struct Editer {
    Node *h, *c;
} Editer;

Editer *e;

Editer *create_editer(void);

void init(Editer *e);

void L(Editer *e);
void D(Editer *e);
void B(Editer *e);
void P(Editer *e, char c);
void print(Editer *e);

int main(void) {
    int m;
    char c, p;
    e = create_editer();
    init(e);
    scanf("%d\n", &m);
    while(m--) {
        scanf("%c ", &c);
        switch(c) {
            case 'L': L(e); break;
            case 'D': D(e); break;
            case 'B': B(e); break;
            case 'P':
                scanf("%c\n", &p);
                P(e, p);
                break;
        }
    }
    print(e);
    return 0;
}

Editer *create_editer(void) {
    Editer *e = (Editer *)malloc(sizeof(Editer));
    e->h = e->c = NULL;
    return e;
}

void init(Editer *e) {
    Node *n;
    char c;
    do {
        c = getchar();
        if(c == '\n') c = '\0';
        n = (Node *)malloc(sizeof(Node));
        n->d = c;
        if(!e->h) {
            e->h = n;
            n->l = NULL;
        } else {
            (e->c)->r = n;
            n->l = e->c;
        }
        e->c = n;
        n->r = NULL;
    } while(c != '\0');
}

void L(Editer *e) {
    if((e->c)->l) e->c = (e->c)->l;
}

void D(Editer *e) {
    if((e->c)->r) e->c = (e->c)->r;
}

void B(Editer *e) {
    Node *d = (e->c)->l;
    if(d) {
        if(d->l) {
            (d->l)->r = e->c;
            (e->c)->l = d->l;
        } else {
            (e->c)->l = NULL;
            e->h = e->c;
        }
        free(d);
    }
}

void P(Editer *e, char c) {
    Node *n = (Node *)malloc(sizeof(Node)), *p = (e->c)->l;
    n->d = c;
    if(p) {
        n->l = p;
        p->r = n;
    } else {
        n->l = NULL;
        e->h = n;
    }
    (e->c)->l = n;
    n->r = e->c;
}

void print(Editer *e) {
    for(Node *n = e->h; n && n->d != '\0'; n = n->r) printf("%c", n->d);
    printf("\n");
}