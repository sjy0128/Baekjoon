#include <stdio.h>
#define MAX_CNT 200001
#define MAX_VAL 1000000

int max_tree[MAX_CNT], min_tree[MAX_CNT], size = 1;

int max(int a, int b);
int min(int a, int b);
void update(int i, int d);
int query(int l, int r);

int main(void) {
    int n, q, h, a, b;
    scanf("%d %d", &n, &q);
    while(size < n) size <<= 1;
    for(int i = 1; i <= n; i++) {
        scanf("%d", &h);
        update(i, h);
    }
    while(q--) {
        scanf("%d %d", &a, &b);
        printf("%d\n", query(a, b));
    }
    return 0;
}

int max(int a, int b) {
    return a > b ? a : b;
}

int min(int a, int b) {
    return a < b ? a : b;
}

void update(int i, int d) {
    i += size - 1;
    max_tree[i] = min_tree[i] = d;
    for(i /= 2; i; i /= 2) {
        max_tree[i] = max(max_tree[i*2], max_tree[i*2+1]);
        min_tree[i] = min(min_tree[i*2], min_tree[i*2+1]);
    }
}

int query(int l, int r) {
    int M = 0, m = MAX_VAL;
    l += size - 1;
    r += size - 1;
    while(l <= r) {
        if(l % 2) {
            M = max(M, max_tree[l]);
            m = min(m, min_tree[l]);
            l++;
        }
        if(!(r % 2)) {
            M = max(M, max_tree[r]);
            m = min(m, min_tree[r]);
            r--;
        }
        l /= 2, r /= 2;
    }
    return M - m;
}