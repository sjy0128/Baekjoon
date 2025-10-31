#include <stdio.h>
#define MAX 4000001

long long tree[MAX];
int size = 1;

void change(int i, long long d);
long long sum(int s, int e);

int main(void) {
    int n, m, k, a, b;
    long long c, t;
    scanf("%d %d %d", &n, &m, &k);
    while(size < n) size <<= 1;
    for(int i=1; i<=n; i++) {
        scanf("%lld", &t);
        change(i, t);
    }
    for(int i=0; i<m+k; i++) {
        scanf("%d %d %lld", &a, &b, &c);
        if(a == 1) change(b, c);
        else printf("%lld\n", sum(b, c));
    }
    return 0;
}

void change(int i, long long d) {
    i += size - 1;
    tree[i] = d;
    for(i/=2; i; i/=2) tree[i] = tree[i*2] + tree[i*2+1];
}

long long sum(int s, int e) {
    long long r = 0;
    s += size - 1;
    e += size - 1;
    while(s <= e) {
        if(s % 2) r += tree[s++];
        if(!(e % 2)) r += tree[e--];
        s /= 2, e /= 2;
    }
    return r;
}