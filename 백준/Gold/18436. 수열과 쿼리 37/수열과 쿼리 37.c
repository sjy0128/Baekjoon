#include <stdio.h>
#define MAX 400001

int tree[MAX], size = 1;

void change(int i, int x);
int query(int l, int r);

int main(void) {
    int n, m, ai, q, a, b;
    scanf("%d", &n);
    while(size < n) size <<= 1;
    for(int i = 1; i <= n; i++) {
        scanf("%d", &ai);
        change(i, ai);
    }
    scanf("%d", &m);
    while(m--) {
        scanf("%d %d %d", &q, &a, &b);
        if(q == 1) change(a, b);
        else printf("%d\n", q == 2 ? b - a + 1 - query(a, b) : query(a, b));
    }
    return 0;
}

void change(int i, int x) {
    i += size - 1;
    tree[i] = x % 2;
    for(i /= 2; i; i /= 2) tree[i] = tree[i*2] + tree[i*2+1];
}

int query(int l, int r) {
    int res = 0;
    l += size - 1;
    r += size - 1;
    while(l <= r) {
        if(l % 2) res += tree[l++];
        if(!(r % 2)) res += tree[r--];
        l /= 2, r /= 2;
    }
    return res;
}