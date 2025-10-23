#include <stdio.h>
#include <stdlib.h>
#define MAX 100001

typedef struct Node {
    int vertex;
    struct Node *next;
} Node;

int d[MAX], visited[MAX], c, id, zero_indegree, result;
int stack[MAX], top=-1;
int scc_id[MAX], scc_size[MAX], scc_count, indegree[MAX];
Node *graph[MAX];

Node *createNode(int v);
void link(int u, int v);
void push(int d);
int pop(void);
int dfs(int v);
int judge(int v);
int min(int a, int b);

int main(void) {
    int b, li, mi, a;
    scanf("%d %d", &c, &b);
    while(b--) {
        scanf("%d %d", &li, &mi);
        while(mi--) {
            scanf("%d", &a);
            link(li, a);
        }
    }
    for(int i=1; i<=c; i++) {
        if(graph[i] && !visited[i]) dfs(i);
    }
    for(int i=1; i<=c; i++) {
        if(!visited[i]) {
            scc_count++;
            scc_id[i] = scc_count;
            scc_size[scc_count]++;
        }
    }
    for(int i=1; i<=c; i++) {
        for(Node *n = graph[i], *t; n; n = t) {
            t = n->next;
            if(scc_id[i] != scc_id[n->vertex]) indegree[scc_id[n->vertex]]++;
            free(n);
        }
    }
    for(int i=1; i<=scc_count; i++) {
        if(!indegree[i]) {
            zero_indegree++;
            if(scc_size[i] > result) result = scc_size[i];
        }
    }
    printf("%d", zero_indegree != 1 ? 0 : result);
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
            scc_size[scc_count]++;
            if(t == v) break;
        }
    }
    return parent;
}

int min(int a, int b) {
    return a < b ? a : b;
}