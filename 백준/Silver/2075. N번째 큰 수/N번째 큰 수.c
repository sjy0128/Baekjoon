#include <stdio.h>
#define MAX 2250001

struct { int size, data[MAX]; } heap = {0};

void push(int d);
int pop(void);

int main(void) {
    int n, a;
    scanf("%d", &n);
    for(int i = 0; i < n * n; i++) {
        scanf("%d", &a);
        push(a);
    }
    for(int i = 0; i < n - 1; i++) pop();
    printf("%d", pop());
    return 0;
}

void push(int d) {
    int i = ++heap.size;
    while(i > 1 && heap.data[i / 2] < d) {
        heap.data[i] = heap.data[i / 2];
        i /= 2;
    }
    heap.data[i] = d;
}

int pop(void) {
    int i = 1, r = heap.data[1], m;
    heap.data[1] = heap.data[heap.size--];
    while(1) {
        m = i;
        if(i * 2 <= heap.size && heap.data[i * 2] > heap.data[m]) m = i * 2;
        if(i * 2 + 1 <= heap.size && heap.data[i * 2 + 1] > heap.data[m]) m = i * 2 + 1;
        if(i == m) break;
        heap.data[i] ^= heap.data[m] ^= heap.data[i] ^= heap.data[m];
        i = m;
    }
    return r;
}