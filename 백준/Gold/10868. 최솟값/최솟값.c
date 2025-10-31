#include <stdio.h>
#define MAX_CNT 400001
#define MAX_VAL 1000000000

int tree[MAX_CNT], size = 1;

int min(int a, int b);
void insert(int i, int d);
int query(int s, int e);

int main(void) {
    int n, m, t, a, b;
    scanf("%d %d", &n, &m);
    while(size < n) size <<= 1;
    for(int i=1; i<=n; i++) {
        scanf("%d", &t);
        insert(i, t);
    }
    while(m--) {
        scanf("%d %d", &a, &b);
        printf("%d\n", query(a, b));
    }
    return 0;
}

int min(int a, int b) {
    return a < b ? a : b;
}

void insert(int i, int d) {
    i += size - 1;
    tree[i] = d;
    for(i/=2; i; i/=2) tree[i] = min(tree[i*2], tree[i*2+1]);
}

int query(int s, int e) {
    int r = MAX_VAL;
    s += size - 1;
    e += size - 1;
    while(s <= e) {
        if(s % 2) r = min(r, tree[s++]);
        if(!(e % 2)) r = min(r, tree[e--]);
        s /= 2, e /= 2;
    }
    return r;
}