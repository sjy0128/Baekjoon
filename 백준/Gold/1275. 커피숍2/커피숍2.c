#include <stdio.h>
#define MAX 400001

long long tree[MAX];
int size = 1;

void change(int i, int d);
long long sum(int s, int e);

int main(void) {
    int n, q, t, x, y, a, b;
    scanf("%d %d", &n, &q);
    while(size < n) size <<= 1;
    for(int i = 1; i <= n; i++) {
        scanf("%d", &t);
        change(i, t);
    }
    while(q--) {
        scanf("%d %d %d %d", &x, &y, &a, &b);
        printf("%lld\n", sum(x, y));
        change(a, b);
    }
    return 0;
}

void change(int i, int d) {
    i += size - 1;
    tree[i] = d;
    for(i /= 2; i; i /= 2) tree[i] = tree[i*2] + tree[i*2+1];
}

long long sum(int s, int e) {
    long long r = 0;
    if(s > e) s ^= e ^= s ^= e;
    s += size - 1;
    e += size - 1;
    while(s <= e) {
        if(s % 2) r += tree[s++];
        if(!(e % 2)) r += tree[e--];
        s /= 2, e /= 2;
    }
    return r;
}