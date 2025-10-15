#include <stdio.h>
#include <stdlib.h>
#define MAX 20000

typedef struct Node {
    int vertex;
    struct Node *next;
} Node;

typedef struct {
    int element[MAX];
    int front, rear;
} Queue;

Node *graph[MAX];
int color[MAX];

Queue *createQueue(void);
Node *createNode(int v);
int empty(Queue *qu);
void push(Queue *qu, int d);
int pop(Queue *qu);
void link(int u, int v);

int main(void) {
    int K, V, E, u, v, c, r, t;
    Queue *qu;
    scanf("%d", &K);
    while(K--) {
        r = 1;
        scanf("%d %d", &V, &E);
        qu = createQueue();
        for(int i=0; i<V; i++) graph[i] = NULL, color[i] = -1;
        for(int i=0; i<E; i++) {
            scanf("%d %d", &u, &v);
            link(u-1, v-1);
            link(v-1, u-1);
        }
        for(int i=0; i<V && r; i++) {
            if(color[i] == -1 && graph[i]) push(qu, i);
            if(color[i] == -1) color[i] = 0;
            while(!empty(qu)) {
                t = pop(qu);
                for(Node *n = graph[t]; n; n = n->next) {
                    if(color[n->vertex] == -1) {
                        color[n->vertex] = !color[t];
                        push(qu, n->vertex);
                    } else if(color[n->vertex] == color[t]) {
                        r = 0;
                        break;
                    }
                }
            }
            free(graph[i]);
        }
        printf(r ? "YES\n" : "NO\n");
        free(qu);
    }
    return 0;
}

Queue *createQueue(void) {
    Queue *qu = (Queue *)malloc(sizeof(Queue));
    qu->front = 0;
    qu->rear = -1;
    return qu;
}

Node *createNode(int v) {
    Node *n = (Node *)malloc(sizeof(Node));
    n->vertex = v;
    n->next = NULL;
    return n;
}

int empty(Queue *qu) {
    return qu->front > qu->rear;
}

void push(Queue *qu, int d) {
    qu->element[++qu->rear] = d;
}

int pop(Queue *qu) {
    return empty(qu) ? -1 : qu->element[qu->front++];
}

void link(int u, int v) {
    Node *n = createNode(v);
    if(graph[u]) n->next = graph[u];
    graph[u] = n;
}