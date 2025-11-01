#include <stdio.h>
#define MAX 400001

long long tree[MAX];
int size = 1;

void update(int i, int d);
long long query(int s, int e);

int main(void) {
    int t, b, p, q, x, y;
    char c;
    scanf("%d", &t);
    while(t--) {
        scanf("%d %d %d", &b, &p, &q);
        while(size < b) size <<= 1;
        for(int i = 1; i < b+size; i++) tree[i] = 0;
        p += q;
        while(p--) {
            scanf(" %c %d %d", &c, &x, &y);
            if(c == 'P') update(x, y);
            else printf("%lld\n", query(x, y));
        }
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