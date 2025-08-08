#include <stdio.h>

void sort(int *a, int *b, int s, int e);
int gcd(int a, int b), abs(int a);

int main(void) {
    int n, m, h[200000], t[200000], sd, sn, p=0, x, y, d, a, dt=0;
    scanf("%d %d", &n, &m);
    scanf("%d %d %d", &x, &y, &h[0]);
    if(!x) {
        sd = 0;
        sn = y;
    } else if(!y) {
        sd = x;
        sn = 0;
    } else {
        sd = x/abs(gcd(x, y));
        sn = y/abs(gcd(x, y));
    }
    for(int i=1; i<n; i++) scanf("%d %d %d", &x, &y, &h[i]);
    sort(h, t, 0, n-1);
    while(m--) {
        scanf("%d %d %d", &x, &y, &d);
        a = 0;
        if(!x) {
            if(!sd && (y > 0 && sn > 0) || (y < 0 && sn < 0)) a = 1;
        } else if(!y) {
            if(!sn && (x > 0 && sd > 0) || (x < 0 && sd < 0)) a = 1;
        } else if(sd && sn) {
            if(!(x%sd) && !(y%sn) && x/sd == y/sn && x/sd > 0) a = 1;
        }
        if(a) {
            dt += d;
            while(p < n && h[p] <= dt) p++;
        }
        printf("%d\n", n-p);
    }
}

void sort(int *a, int *b, int s, int e) {
    if(s >= e) return;
    int m=(s+e)/2;
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

int gcd(int a, int b) {
    if(b == 0) return a;
    return gcd(b, a%b);
}

int abs(int a) {return a > 0 ? a : -a;}