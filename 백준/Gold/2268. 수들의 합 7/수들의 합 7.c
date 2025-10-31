#include <stdio.h>
#define MAX 4000001

long long tree[MAX];
int size = 1;

void modify(int i, int d);
long long sum(int l, int r);

int main(void) {
    int n, m, t, i, jk;
    scanf("%d %d", &n, &m);
    while(size < n) size <<= 1;
    while(m--) {
        scanf("%d %d %d", &t, &i, &jk);
        if(t) modify(i, jk);
        else printf("%lld\n", sum(i, jk));
    }
    return 0;
}

void modify(int i, int d) {
    i += size - 1;
    tree[i] = d;
    for(i=i/2; i; i/=2) {
        tree[i] = tree[i*2] + tree[i*2+1];
    }
}

long long sum(int l, int r) {
    if(l > r) l ^= r ^= l ^= r;
    long long result = 0;
    l += size - 1;
    r += size - 1;
    while(l <= r) {
        if(l % 2) result += tree[l++];
        if(!(r % 2)) result += tree[r--];
        l /= 2, r /= 2;
    }
    return result;
}