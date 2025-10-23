#include <stdio.h>
#include <stdlib.h>
#define MAX 5001

typedef struct Node {
    int vertex;
    struct Node *next;
} Node;

int d[MAX], visited[MAX], id, result;
int stack[MAX], top=-1;
Node *graph[MAX];

Node *createNode(int v);
void link(int u, int v);
void push(int d);
int pop(void);
int dfs(int v);
int min(int a, int b);

int main(void) {
    int d, l, a, b;
    scanf("%d\n%d", &d, &l);
    while(l--) {
        scanf("%d %d", &a, &b);
        link(a, b);
    }
    for(int i=1; i<=d; i++) {
        if(graph[i] && !visited[i]) dfs(i);
    }
    printf("%d", result);
    return 0;
}

Node *createNode(int v) {
    Node *n = (Node *)malloc(sizeof(Node));
    n->vertex = v;
    n->next = NULL;
    return n;
}

void link(int u, int v) {
    Node *n = createNode(v);
    if(graph[u]) n->next = graph[u];
    graph[u] = n;
}

void push(int d) {
    stack[++top] = d;
}

int pop(void) {
    return stack[top--];
}

int dfs(int v) {
    int parent, t, size = 0;
    parent = d[v] = ++id;
    push(v);
    for(Node *n = graph[v], *t; n; n = t) {
        t = n->next;
        if(!d[n->vertex]) parent = min(parent, dfs(n->vertex));
        else if(!visited[n->vertex]) parent = min(parent, d[n->vertex]);
        free(n);
    }
    if(parent == d[v]) {
        while(1) {
            t = pop();
            visited[t] = 1;
            size++;
            if(t == v) break;
        }
        if(size > result) result = size;
    }
    return parent;
}

int min(int a, int b) {
    return a < b ? a : b;
}