#include <stdio.h>
#define MAX 1000001

typedef struct {
    int size;
    long long data[MAX];
} heap;

long long getReverse(long long a);
void swap(long long *a, long long *b);
void push(heap *h, long long d);
long long pop(heap *h);

long long main(void) {
    int n;
    long long e;
    heap h = {0,};
    scanf("%lld", &n);
    for(int i = 0; i < n; i++) {
        scanf("%lld", &e);
        push(&h, getReverse(e));
    }
    for(int i = 0; i < n; i++) printf("%lld\n", pop(&h));
    return 0;
}

long long getReverse(long long a) {
    long long r = 0;
    for(; a; a /= 10) r = r * 10 + a % 10;
    return r;
}

void swap(long long *a, long long *b) {
    *a ^= *b ^= *a ^= *b;
}

void push(heap *h, long long d) {
    int i = ++h->size;
    while(i > 1 && h->data[i / 2] > d) {
        h->data[i] = h->data[i / 2];
        i /= 2;
    }
    h->data[i] = d;
}

long long pop(heap *h) {
    int i = 1;
    long long r = h->data[1], m;
    h->data[1] = h->data[h->size--];
    while(1) {
        m = i;
        if(i * 2 <= h->size && h->data[i * 2] < h->data[m]) m = i * 2;
        if(i * 2 + 1 <= h->size && h->data[i * 2 + 1] < h->data[m]) m = i * 2 + 1;
        if(m == i) break;
        swap(&h->data[i], &h->data[m]);
        i = m;
    }
    return r;
}