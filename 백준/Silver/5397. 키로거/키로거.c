#include <stdio.h>
#include <stdlib.h>

typedef struct Node {
    char d;
    struct Node *l, *r;
} Node;

typedef struct Cursor {
    Node *l, *r;
} Cursor;

typedef struct KeyLogger {
    Node *h;
    Cursor *c;
} KeyLogger;

KeyLogger *kl;

KeyLogger *createKeylogger(void);
Node *createNode(char d, Node *l, Node *r);
int input(KeyLogger *k, char c);
void insert(KeyLogger *k, char d);
void backspace(KeyLogger *k);
void moveLeft(KeyLogger *k);
void moveRight(KeyLogger *k);
void printFree(KeyLogger *k);

int main(void) {
    int t;
    scanf("%d\n", &t);
    while(t--) {
        kl = createKeylogger();
        while(input(kl, getchar()) != -1);
        printFree(kl);
    }
    
    return 0;
}

KeyLogger *createKeylogger(void) {
    KeyLogger *k = (KeyLogger *)malloc(sizeof(KeyLogger));
    Cursor *c = (Cursor *)malloc(sizeof(Cursor));
    k->h = c->l = c->r = NULL;
    k->c = c;
    return k;
}

Node *createNode(char d, Node *l, Node *r) {
    Node *n = (Node *)malloc(sizeof(Node));
    n->d = d;
    n->l = l;
    n->r = r;
    return n;
}

int input(KeyLogger *k, char c) {
    if(c == '\n' || c == '\0' || c == EOF) return -1;
    switch(c) {
        case '-': backspace(k); break;
        case '<': moveLeft(k); break;
        case '>': moveRight(k); break;
        default: insert(k, c);
    }
    return 0;
}

void insert(KeyLogger *k, char d) {
    Cursor *c = k->c;
    Node *l = c->l, *r = c->r;
    Node *n = createNode(d, l, r);
    if(!k->h || !l) k->h = n;
    if(l) l->r = n;
    if(r) r->l = n;
    c->l = n;
}

void backspace(KeyLogger *k) {
    Cursor *c = k->c;
    Node *l = c->l, *r = c->r;
    if(l) {
        Node *ll = l->l;
        if(ll) {
            ll->r = r;
            if(r) r->l = ll;
        } else {
            k->h = r;
            if(r) r->l = NULL;
        }
        c->l = ll;
        free(l);
    }
}

void moveLeft(KeyLogger *k) {
    Cursor *c = k->c;
    if(c->l) {
        c->r = c->l;
        c->l = (c->l)->l;
    }
}

void moveRight(KeyLogger *k) {
    Cursor *c = k->c;
    if(c->r) {
        c->l = c->r;
        c->r = (c->r)->r;
    }
}

void printFree(KeyLogger *k) {
    Node *n = k->h, *t;
    while(n) {
        printf("%c", n->d);
        t = n->r;
        free(n);
        n = t;
    }
    printf("\n");
    free(k->c);
    free(k);
}