#include <stdio.h>
#define MAX 400001

int tree[MAX], size = 1;

void change(int i, int v);
int product(int i, int j);

int main(void) {
    int n, k, xi, a, b, p;
    char c;
    while(scanf("%d %d", &n, &k) != EOF) {
        while(size < n) size <<= 1;
        for(int i = 1; i <= n; i++) {
            scanf("%d", &xi);
            change(i, xi);
        }
        while(k--) {
            scanf(" %c %d %d", &c, &a, &b);
            if(c == 'C') change(a, b);
            else {
                p = product(a, b);
                printf(p > 0 ? "+" : (!p ? "0" : "-"));
            }
        }
        printf("\n");
    }
    return 0;
}

void change(int i, int v) {
    i += size - 1;
    tree[i] = v > 0 ? 1 : (!v ? 0 : -1);
    for(i /= 2; i; i /= 2) tree[i] = tree[i*2] * tree[i*2+1];
}

int product(int i, int j) {
    int r = 1;
    i += size - 1;
    j += size - 1;
    while(i <= j) {
        if(i % 2) r *= tree[i++];
        if(!(j % 2)) r *= tree[j--];
        i /= 2, j /= 2;
    }
    return r;
}