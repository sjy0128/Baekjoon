#include <stdio.h>
#define MAX 101

int cost[MAX], d[MAX], visited[MAX], graph[MAX][MAX], n, id, sum;
int stack[MAX], top=-1;

void push(int d);
int pop(void);
int dfs(int v);
int min(int a, int b);

int main(void) {
    char str[MAX];
    scanf("%d", &n);
    for(int i=1; i<=n; i++) scanf("%d", &cost[i]);
    for(int i=1; i<=n; i++) {
        scanf("%s", str);
        for(int j=1; j<=n; j++) graph[i][j] = str[j-1]-'0';
    }
    for(int i=1; i<=n; i++) {
        if(visited[i]) continue;
        for(int j=1; j<=n; j++) {
            if(graph[i][j] && !visited[i] && !visited[j]) {
                dfs(i);
                break;
            }
        }
    }
    for(int i=1; i<=n; i++) {
        if(!visited[i]) sum += cost[i];
    }
    printf("%d", sum);
    return 0;
}

void push(int d) {
    stack[++top] = d;
}

int pop(void) {
    return stack[top--];
}

int dfs(int v) {
    int parent, t, m;
    d[v] = parent = ++id;
    push(v);
    for(int i=1; i<=n; i++) {
        if(graph[v][i]) {
            if(!d[i]) parent = min(parent, dfs(i));
            else if(!visited[i]) parent = min(parent, d[i]);
        }
    }
    if(parent == d[v]) {
        m = 0;
        while(1) {
            t = pop();
            if(!m || cost[t] < m) m = cost[t];
            visited[t] = 1;
            if(t == v) break;
        }
        sum += m;
    }
    return parent;
}

int min(int a, int b) {
    return a < b ? a : b;
}