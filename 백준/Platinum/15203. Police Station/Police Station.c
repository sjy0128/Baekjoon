#include <stdio.h>
#include <stdlib.h>
#define MAX 1000001

typedef struct Node {
    int vertex;
    struct Node *next;
} Node;

int d[MAX], id;
int stack[MAX], top=-1;
Node *adj_list[MAX];
int scc_count, scc_id[MAX], scc_size[MAX], indegree[MAX], zero_indegree;

Node *createNode(int v);
void link(int u, int v);
void push(int d);
int pop(void);
int dfs(int v);
int min(int a, int b);

int main(void) {
    int n, m, a, b;
    scanf("%d %d", &n, &m);
    while(m--) {
        scanf("%d %d", &a, &b);
        link(a, b);
    }
    for(int i=1; i<=n; i++) {
        if(adj_list[i] && !scc_id[i]) dfs(i);
    }
    for(int i=1; i<=n; i++) {
        if(!scc_id[i]) scc_size[scc_id[i] = ++scc_count] = 1;
    }
    for(int i=1; i<=n; i++) {
        for(Node *n = adj_list[i], *t; n; n = t) {
            t = n->next;
            if(scc_id[i] != scc_id[n->vertex]) indegree[scc_id[n->vertex]]++;
            free(n);
        }
    }
    for(int i=1; i<=scc_count; i++) {
        if(!indegree[i]) {
            if(!zero_indegree) zero_indegree = i;
            else {
                printf("0");
                return 0;
            }
        }
    }
    printf("%d\n", scc_size[zero_indegree]);
    for(int i=1; i<=n; i++) {
        if(scc_id[i] == zero_indegree) printf("%d ", i);
    }
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
    for(Node *n = adj_list[v]; n; n = n->next) {
        if(!d[n->vertex]) parent = min(parent, dfs(n->vertex));
        else if(!scc_id[n->vertex]) parent = min(parent, d[n->vertex]);
    }
    if(parent == d[v]) {
        scc_count++;
        while(1) {
            t = pop();
            scc_size[scc_id[t] = scc_count]++;
            if(t == v) break;
        }
    }
    return parent;
}

int min(int a, int b) {
    return a < b ? a : b;
}