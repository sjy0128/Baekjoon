#include <stdio.h>
#include <stdlib.h>
#define MAX 10001

typedef struct Node {
    int vertex;
    struct Node *next;
} Node;

typedef struct {
    int data[MAX], top;
} Stack;

typedef struct {
    int *data, size;
} Heap;

int d[MAX], visited[MAX], id, k;
Node *graph[MAX];
Stack *st;
Heap *SCC[MAX], *t[MAX];

Node *createNode(int v);
Stack *createStack(void);
Heap *createHeap(void);
void link(int u, int v);
void stackPush(Stack *st, int d);
int stackPop(Stack *st);
void heapInsert(Heap *h, int d);
int heapPeek(Heap *h);
int heapPop(Heap *h);
int dfs(int v);
void sortHeap(Heap **h, Heap **t, int s, int e);
void printHeap(Heap *h);
void swap(int *a, int *b);
int min(int a, int b);

int main(void) {
    int v, e, a, b;
    st = createStack();
    scanf("%d %d", &v, &e);
    for(int i=0; i<e; i++) {
        scanf("%d %d", &a, &b);
        link(a, b);
    }
    for(int i=1; i<=v; i++) {
        if(graph[i] && !visited[i]) dfs(i);
    }
    for(int i=1; i<=v; i++) {
        if(!visited[i]) {
            SCC[k] = createHeap();
            heapInsert(SCC[k], i);
            visited[i] = 1;
            k++;
        }
    }
    sortHeap(SCC, t, 0, k-1);
    printf("%d\n", k);
    for(int i=0; i<k; i++) {
        printHeap(SCC[i]);
        free(SCC[i]->data);
        free(SCC[i]);
    }
    free(st);
    return 0;
}

Node *createNode(int v) {
    Node *n = (Node *)malloc(sizeof(Node));
    n->vertex = v;
    n->next = NULL;
    return n;
}

Stack *createStack(void) {
    Stack *st = (Stack *)malloc(sizeof(Stack));
    st->top = -1;
    return st;
}

Heap *createHeap(void) {
    Heap *h = (Heap *)malloc(sizeof(Heap));
    h->data = (int *)malloc(sizeof(int));
    h->size = 0;
    return h;
}

void link(int u, int v) {
    Node *n = createNode(v);
    if(graph[u]) n->next = graph[u];
    graph[u] = n;
}

void stackPush(Stack *st, int d) {
    st->data[++st->top] = d;
}

int stackPop(Stack *st) {
    return st->data[st->top--];
}

void heapInsert(Heap *h, int d) {
    int i = ++h->size;
    h->data = (int *)realloc(h->data, sizeof(int) * (h->size + 1));
    while(i > 1 && h->data[i/2] > d) {
        h->data[i] = h->data[i/2];
        i /= 2;
    }
    h->data[i] = d;
}

int heapPeek(Heap *h) {
    return h->data[1];
}

int heapPop(Heap *h) {
    int r = heapPeek(h), i=1, min, left, right;
    h->data[1] = h->data[h->size--];
    while(1) {
        min = i, left = i*2, right = i*2+1;
        if(left <= h->size && h->data[left] < h->data[min]) min = left;
        if(right <= h->size && h->data[right] < h->data[min]) min = right;
        if(min == i) break;
        swap(&h->data[i], &h->data[min]);
        i = min;
    }
    return r;
}

int dfs(int v) {
    int parent = d[v] = ++id, t;
    stackPush(st, v);
    for(Node *n = graph[v], *t; n; n = t) {
        t = n->next;
        if(!d[n->vertex]) parent = min(parent, dfs(n->vertex));
        else if(!visited[n->vertex]) parent = min(parent, d[n->vertex]);
        free(n);
    }
    if(parent == d[v]) {
        SCC[k] = createHeap();
        while(1) {
            t = stackPop(st);
            heapInsert(SCC[k], t);
            visited[t] = 1;
            if(t == v) break;
        }
        k++;
    }
    return parent;
}

void sortHeap(Heap **h, Heap **t, int s, int e) {
    if(s >= e) return;
    int m = (s+e)/2;
    int i = s, j = m+1, k = s;
    sortHeap(h, t, s, m);
    sortHeap(h, t, m+1, e);
    while(i <= m && j <= e) t[k++] = heapPeek(h[i]) < heapPeek(h[j]) ? h[i++] : h[j++];
    while(i <= m) t[k++] = h[i++];
    while(j <= e) t[k++] = h[j++];
    for(i=s; i<=e; i++) h[i] = t[i];
}

void printHeap(Heap *h) {
    while(h->size) printf("%d ", heapPop(h));
    printf("-1\n");
}

void swap(int *a, int *b) {
    int t = *a;
    *a = *b;
    *b = t;
}

int min(int a, int b) {
    return a < b ? a : b;
}