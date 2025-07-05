#include <stdio.h>
#include <stdlib.h>

void sort(int *a, int *t, int s, int e);

int main(void) {
    int n, m, i, j, b, s, e, c, x, l=0;
    scanf("%d", &n);
    int *a = (int *)malloc(sizeof(int)*n);
    int *t = (int *)malloc(sizeof(int)*n);
    int *h = (int *)malloc(sizeof(int)*n*2);
    for(i=0; i<n; i++) scanf("%d", &a[i]);
    sort(a, t, 0, n-1);
    free(t);
    h[0] = a[0];
    h[1] = 1;
    for(i=1; i<n; i++) {
        if(a[i] != h[l]) {
            l += 2;
            h[l] = a[i];
        }
        h[l+1]++;
    }
    free(a);
    scanf("%d", &m);
    for(i=0; i<m; i++) {
        scanf("%d", &b);
        s = 0;
        e = l/2;
        c = 0;
        while(s <= e) {
            x = (s + e) / 2;
            if(h[x*2] == b) {
                c = h[x*2+1];
                break;
            } else if(h[x*2] < b) s = x+1;
            else e = x-1;
        }
        printf("%d ", c);
    }
    free(h);
    return 0;
}

void sort(int *a, int *t, int s, int e) {
    if(s >= e) return;
    int m=(s+e)/2;
    int i=s, j=m+1, k=s;
    sort(a, t, s, m);
    sort(a, t, m+1, e);
    while(i <= m && j <= e) {
        if(a[i] < a[j]) t[k++] = a[i++];
        else t[k++] = a[j++];
    }
    while(i <= m) t[k++] = a[i++];
    while(j <= e) t[k++] = a[j++];
    for(k=s; k<=e; k++) a[k] = t[k];
}