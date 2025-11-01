#include <stdio.h>
#define MAX 2000001

long long tree[MAX];
int size = 1;

void update(int i, int d);
long long query(int s, int e);

int main(void) {
    int n, t, p, a, b;
    char c;
    scanf("%d", &n);
    while(size < n) size <<= 1;
    for(int i = 1; i <= n; i++) {
        scanf("%d", &p);
        update(i, p);
    }
    scanf("%d", &t);
    while(t--) {
        scanf(" %c %d %d", &c, &a, &b);
        if(c == 'U') update(a, b);
        else printf("%lld\n", query(a, b));
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