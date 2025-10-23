#include <stdio.h>
#include <stdlib.h>
#define MAX 200001

typedef struct Node {
    int vertex;
    struct Node *next;
} Node;

int d[MAX], visited[MAX], id, SCC_count;
int stack[MAX], top=-1;
Node *graph[MAX];

Node *createNode(int v);
void link(int v, int w);
void push(int d);
int pop(void);
int dfs(int v);
int min(int a, int b);

int main(void) {
    int n, m, v, w;
    scanf("%d %d", &n, &m);
    if(n == 1) {
        printf("Yes");
        return 0;
    }
    while(m--) {
        scanf("%d %d", &v, &w);
        link(v, w);
    }
    for(int i=1; i<=n; i++) {
        if(graph[i] && !visited[i]) dfs(i);
    }
    printf(SCC_count == 1 ? "Yes" : "No");
    return 0;
}

Node *createNode(int v) {
    Node *n = (Node *)malloc(sizeof(Node));
    n->vertex = v;
    n->next = NULL;
    return n;
}

void link(int v, int w) {
    Node *n = createNode(w);
    if(graph[v]) n->next = graph[v];
    graph[v] = n;
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
            if(t == v) break;
        }
        SCC_count++;
    }
    return parent;
}

int min(int a, int b) {
    return a < b ? a : b;
}