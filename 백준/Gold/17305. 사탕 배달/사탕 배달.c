#include <stdio.h>

void sort(int *a, int *b, int s, int e);
int min(int a, int b) {return a < b ? a : b;}

int main(void) {
    int n, w, i, t, s, al=0, bl=0, a[250000], b[250000], c[250000];
    long long as[250001], bs[250001], m=0, sum;
    scanf("%d %d", &n, &w);
    for(i=0; i<n; i++) {
        scanf("%d %d", &t, &s);
        if(t == 3) a[al++] = s;
        if(t == 5) b[bl++] = s;
    }
    sort(a, c, 0, al-1);
    sort(b, c, 0, bl-1);
    as[0] = 0;
    bs[0] = 0;
    for(i=1; i<=al; i++) as[i] = as[i-1] + a[i-1];
    for(i=1; i<=bl; i++) bs[i] = bs[i-1] + b[i-1];
    for(i=0; i<=min(bl,w/5); i++) {
        sum = bs[i] + as[min(al,(w-i*5)/3)];
        if(sum > m) m = sum;
    }
    printf("%lld", m);
    return 0;
}

void sort(int *a, int *b, int s, int e) {
    if(s >= e) return;
    int m = (s+e)/2;
    int i=s, j=m+1, k=s;
    sort(a, b, s, m);
    sort(a, b, m+1, e);
    while(i <= m && j <= e) {
        if(a[i] > a[j]) b[k++] = a[i++];
        else b[k++] = a[j++];
    }
    while(i <= m) b[k++] = a[i++];
    while(j <= e) b[k++] = a[j++];
    for(i=s; i<=e; i++) a[i] = b[i];
}