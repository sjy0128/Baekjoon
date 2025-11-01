#include <stdio.h>
#define MAX 4000001

long long tree[MAX];
int size = 1;

void update(int i, int d);
long long query(int s, int e);

int main(void) {
    int n, q, a, b, c;
    scanf("%d %d", &n, &q);
    while(size < n) size <<= 1;
    while(q--) {
        scanf("%d %d %d", &a, &b, &c);
        if(a == 1) update(b, c);
        else printf("%lld\n", query(b, c));
    }
    return 0;
}

void update(int i, int d) {
    i += size - 1;
    tree[i] += d;
    for(i /= 2; i; i /= 2) tree[i] = tree[i*2] + tree[i*2+1];
}

long long query(int s, int e) {
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