#include <stdio.h>
#include <stdlib.h>
#define MAX_NODE 20000
#define MAX_EDGE 300000
#define INF 200001

typedef struct GraphNode {
    int vertex, weight;
    struct GraphNode *next;
} GraphNode;

typedef struct { int vertex, value; } PQNode;

typedef struct {
    int size;
    PQNode element[MAX_EDGE+1];
} PQ;

void initGraph(void);
PQ *createPQ(void);
GraphNode *createGraphNode(int v, int w);

void addEdge(int u, int v, int w);
void link(int u, GraphNode *h);

void insert(PQ *pq, PQNode e);
PQNode pop(PQ *pq);
void swap(PQNode *a, PQNode *b);

void dijkstra(PQ *pq, int s, int n);

GraphNode *graph[MAX_NODE];
int visited[MAX_NODE], distance[MAX_NODE];

int main(void) {
    int V, E, K, u, v, w;
    PQ *pq = createPQ();
    scanf("%d %d\n%d", &V, &E, &K);
    initGraph();
    for(int i=0; i<E; i++) {
        scanf("%d %d %d", &u, &v, &w);
        addEdge(u-1, v-1, w);
    }
    dijkstra(pq, K-1, V);
    for(int i=0; i<V; i++) {
        if(distance[i] == INF) printf("INF\n");
        else printf("%d\n", distance[i]);
    }
    free(pq);
    return 0;
}

void initGraph(void) {
    for(int i=0; i<MAX_NODE; i++) graph[i] = NULL;
}

PQ *createPQ(void) {
    PQ *pq = (PQ *)malloc(sizeof(PQ));
    pq->size = 0;
    return pq;
}

GraphNode *createGraphNode(int v, int w) {
    GraphNode *n = (GraphNode *)malloc(sizeof(GraphNode));
    n->vertex = v;
    n->weight = w;
    n->next = NULL;
    return n;
}

void addEdge(int u, int v, int w) {
    link(u, createGraphNode(v, w));
}

void link(int u, GraphNode *h) {
    if(graph[u]) h->next = graph[u];
    graph[u] = h;
}

void insert(PQ *pq, PQNode e) {
    int i = ++pq->size;
    while(i > 1 && e.value < pq->element[i/2].value) {
        pq->element[i] = pq->element[i/2];
        i /= 2;
    }
    pq->element[i] = e;
}

PQNode pop(PQ *pq) {
    int i = 1, min, left, right;
    PQNode r = pq->element[1];
    pq->element[1] = pq->element[pq->size--];
    while(1) {
        min = i, left = i*2, right = i*2+1;
        if(left <= pq->size && pq->element[left].value < pq->element[min].value) min = left;
        if(right <= pq->size && pq->element[right].value < pq->element[min].value) min = right;
        if(min == i) break;
        swap(&pq->element[i], &pq->element[min]);
        i = min;
    }
    return r;
}

void swap(PQNode *a, PQNode *b) {
    PQNode t = *a;
    *a = *b;
    *b = t;
}

void dijkstra(PQ *pq, int s, int n) {
    PQNode current;
    GraphNode *node, *temp;
    int u, v, w;
    for(int i=0; i<n; i++) visited[i] = 0, distance[i] = INF;
    distance[s] = 0;
    insert(pq, (PQNode){s, 0});
    while(pq->size) {
        current = pop(pq);
        u = current.vertex;
        if(visited[u]) continue;
        visited[u] = 1;
        node = graph[u];
        while(node) {
            v = node->vertex, w = node->weight;
            temp = node->next;
            if(!visited[v] && distance[u] + w < distance[v]) {
                distance[v] = distance[u] + w;
                insert(pq, (PQNode){v, distance[v]});
            }
            free(node);
            node = temp;
        }
    }
}