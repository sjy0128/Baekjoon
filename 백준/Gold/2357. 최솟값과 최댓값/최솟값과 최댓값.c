#include <stdio.h>
#define MAX 400001
#define INF 1000000000

int max_tree[MAX], min_tree[MAX], size = 1;

void insert(int i, int d);
int max(int a, int b);
int min(int a, int b);
int getMax(int a, int b);
int getMin(int a, int b);

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
        printf("%d %d\n", getMin(a, b), getMax(a, b));
    }
    return 0;
}

void insert(int i, int d) {
    i += size - 1;
    max_tree[i] = min_tree[i] = d;
    for(i/=2; i; i/=2) {
        max_tree[i] = max(max_tree[i*2], max_tree[i*2+1]);
        min_tree[i] = min(min_tree[i*2], min_tree[i*2+1]);
    }
}

int max(int a, int b) {
    return a > b ? a : b;
}

int min(int a, int b) {
    return a < b ? a : b;
}

int getMax(int a, int b) {
    int m = 0;
    a += size - 1;
    b += size - 1;
    while(a <= b) {
        if(a % 2) {
            m = max(m, max_tree[a]);
            a++;
        }
        if(!(b % 2)) {
            m = max(m, max_tree[b]);
            b--;
        }
        a /= 2, b /= 2;
    }
    return m;
}

int getMin(int a, int b) {
    int m = INF;
    a += size - 1;
    b += size - 1;
    while(a <= b) {
        if(a % 2) {
            m = min(m, min_tree[a]);
            a++;
        }
        if(!(b % 2)) {
            m = min(m, min_tree[b]);
            b--;
        }
        a /= 2, b /= 2;
    }
    return m;
}