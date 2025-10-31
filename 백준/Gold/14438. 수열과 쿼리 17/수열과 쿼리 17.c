#include <stdio.h>
#define MAX_CNT 400001
#define MAX_VAL 1000000000

int tree[MAX_CNT], size = 1;

int min(int a, int b);
void change(int i, int v);
int query(int i, int j);

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
        else printf("%d\n", query(a, b));
    }
    return 0;
}

int min(int a, int b) {
    return a < b ? a : b;
}

void change(int i, int v) {
    i += size - 1;
    tree[i] = v;
    for(i /= 2; i; i /= 2) tree[i] = min(tree[i*2], tree[i*2+1]);
}

int query(int i, int j) {
    int r = MAX_VAL;
    i += size - 1;
    j += size - 1;
    while(i <= j) {
        if(i % 2) r = min(r, tree[i++]);
        if(!(j % 2)) r = min(r, tree[j--]);
        i /= 2, j /= 2;
    }
    return r;
}