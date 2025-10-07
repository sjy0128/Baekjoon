#include <stdio.h>
#define MAX 100000

int h[MAX], s;

int abs(int a) {return a?a:-a;}
int judge(int a, int b);

void insert(int d);
int pop(void);

int main(void) {
    int n, x;
    scanf("%d", &n);
    while(n--) {
        scanf("%d", &x);
        if(x) insert(x);
        else printf("%d\n", pop());
    }
    return 0;
}

void insert(int d) {
    int i=++s;
    while(i > 1 && judge(d, h[i/2])) {
        h[i] = h[i/2];
        i /= 2;
    }
    h[i] = d;
}

int pop(void) {
    if(!s) return 0;
    int d=h[1], i=1, m, l, r;
    h[1] = h[s--];
    while(1) {
        m = i, l = i*2, r = i*2+1;
        if(l <= s && judge(h[l], h[m])) m = l;
        if(r <= s && judge(h[r], h[m])) m = r;
        if(m == i) break;
        h[i] ^= h[m] ^= h[i] ^= h[m];
        i = m;
    }
    return d;
}

int judge(int a, int b) {
    return abs(a) < abs(b) || abs(a) == abs(b) && a < b;
}