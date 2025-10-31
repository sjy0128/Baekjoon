#include <stdio.h>
#define MAX 4000001
#define MOD 1000000007

int tree[MAX], size = 1;

int multiple(int a, int b);
void change(int i, int d);
int query(int s, int e);

int main(void) {
    int n, m, k, t, a, b, c;
    scanf("%d %d %d", &n, &m, &k);
    while(size < n) size <<= 1;
    for(int i=1; i<=n; i++) {
        scanf("%d", &t);
        change(i, t);
    }
    m += k;
    while(m--) {
        scanf("%d %d %d", &a, &b, &c);
        if(a == 1) change(b, c);
        else printf("%d\n", query(b, c));
    }
    return 0;
}

int multiple(int a, int b) {
    return ((long long)(a % MOD) * (b % MOD)) % MOD;
}

void change(int i, int d) {
    i += size - 1;
    tree[i] = d;
    for(i/=2; i; i/=2) tree[i] = multiple(tree[i*2], tree[i*2+1]);
}

int query(int s, int e) {
    int r = 1;
    s += size - 1;
    e += size - 1;
    while(s <= e) {
        if(s % 2) r = multiple(r, tree[s++]);
        if(!(e % 2)) r = multiple(r, tree[e--]);
        s /= 2, e /= 2;
    }
    return r;
}