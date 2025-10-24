#include <stdio.h>
#include <stdlib.h>
#define MAX 100001

typedef struct Node {
    int vertex;
    struct Node *next;
} Node;

int d[MAX], visited[MAX], id;
int stack[MAX], top=-1;
Node *graph[MAX];
int scc_count, scc_id[MAX], indegree[MAX], result;

void init(int n);
Node *createNode(int v);
void link(int u, int v);
void push(int d);
int pop(void);
int dfs(int v);
int min(int a, int b);

int main(void) {
    int t, n, m, x, y;
    scanf("%d", &t);
    while(t--) {
        scanf("%d %d", &n, &m);
        init(n);
        while(m--) {
            scanf("%d %d", &x, &y);
            link(x, y);
        }
        for(int i=1; i<=n; i++) {
            if(graph[i] && !visited[i]) dfs(i);
        }
        for(int i=1; i<=n; i++) {
            if(!visited[i]) {
                scc_id[i] = ++scc_count;
            }
        }
        for(int i=1; i<=n; i++) {
            for(Node *n = graph[i], *t; n; n = t) {
                t = n->next;
                if(scc_id[i] != scc_id[n->vertex]) indegree[scc_id[n->vertex]]++;
                free(n);
            }
        }
        for(int i=1; i<=scc_count; i++) {
            if(!indegree[i]) result++;
        }
        printf("%d\n", result);
    }
    return 0;
}

void init(int n) {
    scc_count = result = id = 0, top = -1;
    for(int i=1; i<=n; i++) {
        d[i] = visited[i] = scc_id[i] = indegree[i] = 0;
        graph[i] = NULL;
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
    int parent, t;
    parent = d[v] = ++id;
    push(v);
    for(Node *n = graph[v]; n; n = n->next) {
        if(!d[n->vertex]) parent = min(parent, dfs(n->vertex));
        else if(!visited[n->vertex]) parent = min(parent, d[n->vertex]);
    }
    if(parent == d[v]) {
        scc_count++;
        while(1) {
            t = pop();
            visited[t] = 1;
            scc_id[t] = scc_count;
            if(t == v) break;
        }
    }
    return parent;
}

int min(int a, int b) {
    return a < b ? a : b;
}