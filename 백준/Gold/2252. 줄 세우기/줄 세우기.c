#include <stdio.h>
#include <stdlib.h>

typedef struct node {
    int v;
    struct node* n;
} node;

node *g[32000];
short v[32000];
int r[32000], ri;

void edge(int a, int b), dfs(int n);

int main(void) {
    int n, m, a, b, id[32000]={0,};
    scanf("%d %d", &n, &m);
    for(int i=0; i<m; i++) {
        scanf("%d %d", &a, &b);
        node *n = (node*)malloc(sizeof(node));
        n->v = b-1;
        n->n = g[a-1];
        g[a-1] = n;
        id[b-1]++;
    }
    for(int i=0; i<n; i++) {
        if(id[i] == 0) dfs(i);
    }
    for(int i=0; i<n; i++) {
        node *a=g[i], *b;
        while(a != NULL) {
            b = a;
            a = a->n;
            free(b);
        }
    }
    for(int i=ri-1; i>=0; i--) {
        printf("%d ", r[i]);
    }
    for(int i=0; i<n; i++) {
        if(!v[i]) printf("%d ", i+1);
    }
    return 0;
}

void edge(int a, int b) {
    node *n = (node*)malloc(sizeof(node));
    n->v = b;
    n->n = g[a];
    g[a] = n;
}

void dfs(int n) {
    v[n] = 1;
    for(node*a=g[n]; a!=NULL; a=a->n) {
        if(!v[a->v]) dfs(a->v);
    }
    r[ri++] = n+1;
}