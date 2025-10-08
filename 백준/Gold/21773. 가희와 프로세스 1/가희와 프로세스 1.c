#include <stdio.h>
#include <stdlib.h>
#define MAX 100001

typedef struct {
    int id, time, priority;
} Process;

typedef struct {
    int size;
    Process element[MAX];
} PriorityQueue;

PriorityQueue *createPriorityQueue(void);
void insert(PriorityQueue *pq, Process e);
int execute(PriorityQueue *pq);
int compare(Process a, Process b);
void swap(Process *a, Process *b);
void heapifyDown(PriorityQueue *pq);

int main(void) {
    PriorityQueue *pq = createPriorityQueue();
    int t, n, a, b, c;
    scanf("%d %d", &t, &n);
    while(n--) {
        scanf("%d %d %d", &a, &b, &c);
        insert(pq, (Process){a, b, c});
    }
    while(t-- && execute(pq));
    free(pq);
    return 0;
}

PriorityQueue *createPriorityQueue(void) {
    PriorityQueue *pq = (PriorityQueue *)malloc(sizeof(PriorityQueue));
    pq->size = 0;
    return pq;
}

void insert(PriorityQueue *pq, Process e) {
    int i = ++pq->size;
    while(i > 1 && compare(e, pq->element[i/2])) {
        pq->element[i] = pq->element[i/2];
        i /= 2;
    }
    pq->element[i] = e;
}

int execute(PriorityQueue *pq) {
    pq->element[1].time--;
    pq->element[1].priority--;
    printf("%d\n", pq->element[1].id);
    if(!pq->element[1].time) pq->element[1] = pq->element[pq->size--];
    if(!pq->size) return 0; 
    heapifyDown(pq);
    return 1;
}

int compare(Process a, Process b) {
    return a.priority > b.priority || (a.priority == b.priority && a.id < b.id);
}

void swap(Process *a, Process *b) {
    Process t = *a;
    *a = *b;
    *b = t;
}

void heapifyDown(PriorityQueue *pq) {
    int max, left, right, i = 1;
    while(1) {
        max = i, left = i*2, right = i*2+1;
        if(left <= pq->size && compare(pq->element[left], pq->element[max])) max = left;
        if(right <= pq->size && compare(pq->element[right], pq->element[max])) max = right;
        if(max == i) break;
        swap(&pq->element[i], &pq->element[max]);
        i = max;
    }
}