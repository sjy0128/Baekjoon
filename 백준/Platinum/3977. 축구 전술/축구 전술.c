#include <stdio.h>
#include <stdlib.h>
#define MAX 100001

typedef struct Node {
    int vertex;
    struct Node *next;
} Node;

int d[MAX], id, zero_indegree;
int stack[MAX], top = -1;
Node *adj_list[MAX];
int scc_count, scc_id[MAX], indegree[MAX];

void init(int n);
Node *createNode(int v);
void link(int u, int v);
void push(int d);
int pop(void);
int dfs(int v);
int min(int a, int b);

int main(void) {
    int t, n, m, a, b;
    scanf("%d", &t);
    while(t--) {
        scanf("%d %d", &n, &m);
        init(n);
        while(m--) {
            scanf("%d %d", &a, &b);
            link(a+1, b+1);
        }
        for(int i=1; i<=n; i++) {
            if(adj_list[i] && !scc_id[i]) dfs(i);
        }
        for(int i=1; i<=n; i++) {
            if(!scc_id[i]) scc_id[i] = ++scc_count;
        }
        for(int i=1; i<=n; i++) {
            for(Node *n = adj_list[i], *t; n; n = t) {
                t = n->next;
                if(scc_id[i] != scc_id[n->vertex]) indegree[scc_id[n->vertex]]++;
                free(n);
            }
        }
        for(int i=1; i<=scc_count; i++) {
            if(!indegree[i]) zero_indegree++;
        }
        if(zero_indegree != 1) printf("Confused\n");
        else {
            for(int i=1; i<=n; i++) {
                if(!indegree[scc_id[i]]) printf("%d\n", i-1);
            }
        }
        printf("\n");
    }
    return 0;
}

void init(int n) {
    id = zero_indegree = scc_count = 0;
    top = -1;
    for(int i=1; i<=n; i++) {
        d[i] = scc_id[i] = indegree[i] = 0;
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
    for(Node *n = adj_list[v]; n; n = n->next) {
        if(!d[n->vertex]) parent = min(parent, dfs(n->vertex));
        else if(!scc_id[n->vertex]) parent = min(parent, d[n->vertex]);
    }
    if(parent == d[v]) {
        scc_count++;
        while(1) {
            scc_id[t = pop()] = scc_count;
            if(t == v) break;
        }
    }
    return parent;
}

int min(int a, int b) {
    return a < b ? a : b;
}