#include <stdio.h>
#define MAX 100000

int h[MAX], len;

void insert(int a);
int pop(void);

int main(void) {
    int n, x;
    scanf("%d", &n);
    while(n--) {
        scanf("%d", &x);
        if(!x) printf("%d\n", pop());
        else insert(x);
    }
    return 0;
}

void insert(int a) {
    int i = ++len;
    while(i > 1 && a < h[i/2]) {
        h[i] = h[i/2];
        i /= 2;
    }
    h[i] = a;
}

int pop(void) {
    if(!len) return 0;
    int x = h[1], i = 1, l, r, m;
    h[1] = h[len--];
    while(1) {
        l = i*2, r = i*2+1, m = i;
        if(l <= len && h[l] < h[m]) m = l;
        if(r <= len && h[r] < h[m]) m = r;
        if(m == i) break;
        h[i] ^= h[m] ^= h[i] ^= h[m];
        i = m;
    }
    return x;
}