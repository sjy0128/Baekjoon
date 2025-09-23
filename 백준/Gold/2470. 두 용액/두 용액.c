#include <stdio.h>
#define MAX 100000
#define MAXNUM 2000000001

void sort(int *a, int *b, int s, int e);

int abs(int a) {return a > 0 ? a : -a;}

int main(void) {
    int n, t, a[MAX], b[MAX], m=MAXNUM, s, e, m1, m2;
    scanf("%d", &n);
    for(int i=0; i<n; i++) scanf("%d", &a[i]);
    sort(a, b, 0, n-1);
    s=0, e=n-1;
    while(s < e) {
        t = a[s] + a[e];
        if(abs(t) < m) {
            m1 = a[s], m2 = a[e];
            m = abs(m1 + m2);
        }
        if(t <= 0) s++;
        else e--;
    }
    if(m1 > m2) m1 ^= m2 ^= m1 ^= m2;
    printf("%d %d", m1, m2);
    return 0;
}

void sort(int *a, int *b, int s, int e) {
    if(s >= e) return;
    int m = (s+e)/2;
    int i=s, j=m+1, k=s;
    sort(a, b, s, m);
    sort(a, b, m+1, e);
    while(i <= m && j <= e) {
        if(a[i] < a[j]) b[k++] = a[i++];
        else b[k++] = a[j++];
    }
    while(i <= m) b[k++] = a[i++];
    while(j <= e) b[k++] = a[j++];
    for(i=s; i<=e; i++) a[i] = b[i];
}