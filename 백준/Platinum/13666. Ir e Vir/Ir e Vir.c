#include <stdio.h>
#include <stdlib.h>
#define MAX 2001

typedef struct Node {
    int vertex;
    struct Node *next;
} Node;

int d[MAX], finished[MAX], id;
int stack[MAX], top;
Node *adj_list[MAX];
int scc_count;

void init(int n);
Node *createNode(int v);
void link(int u, int v);
void push(int d);
int pop(void);
int dfs(int v);
int min(int a, int b);

int main(void) {
    int n, m, v, w, p;
    while(1) {
        scanf("%d %d", &n, &m);
        if(!n && !m) break;
        init(n);
        while(m--) {
            scanf("%d %d %d", &v, &w, &p);
            link(v, w);
            if(p == 2) link(w, v);
        }
        for(int i=1; i<=n; i++) {
            if(adj_list[i] && !finished[i]) dfs(i);
        }
        for(int i=1; i<=n; i++) {
            if(!finished[i]) scc_count++;
        }
        printf("%d\n", scc_count == 1);
    }
    return 0;
}

void init(int n) {
    top = -1;
    id = scc_count = 0;
    for(int i=1; i<=n; i++) {
        d[i] = finished[i] = 0;
        adj_list[i] = NULL;
    }
}

Node *createNode(int v) {
    Node *n = (Node *)malloc(sizeof(Node));
    n->vertex = v;
    n->next = NULL;
    return n;
}

void link(int u, int v) {
    Node *n = createNode(v);
    if(adj_list[u]) n->next = adj_list[u];
    adj_list[u] = n;
}

void push(int d) {
    stack[++top] = d;
}

int pop(void) {
    return stack[top--];
}

int dfs(int v) {
    int parent, t;
    parent = d[v] = ++id;
    push(v);
    for(Node *n = adj_list[v], *t; n; n = t) {
        t = n->next;
        if(!d[n->vertex]) parent = min(parent, dfs(n->vertex));
        else if(!finished[n->vertex]) parent = min(parent, d[n->vertex]);
        free(n);
    }
    if(parent == d[v]) {
        while(1) {
            finished[t = pop()] = 1;
            if(t == v) break;
        }
        scc_count++;
    }
    return parent;
}

int min(int a, int b) {
    return a < b ? a : b;
}