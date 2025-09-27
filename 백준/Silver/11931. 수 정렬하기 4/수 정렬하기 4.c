#include <stdio.h>
#include <stdlib.h>

void sort(int *a, int *t, int s, int e);

int main(void) {
    int n, *a, *t;
    scanf("%d", &n);
    a = (int *)malloc(sizeof(int) * n);
    t = (int *)malloc(sizeof(int) * n);
    for(int i=0; i<n; i++) scanf("%d", &a[i]);
    sort(a, t, 0, n-1);
    free(t);
    for(int i=0; i<n; i++) printf("%d\n", a[i]);
    free(a);
    return 0;
}

void sort(int *a, int *t, int s, int e) {
    if(s >= e) return;
    int m=(s+e)/2;
    int i=s, j=m+1, k=s;
    sort(a, t, s, m);
    sort(a, t, m+1, e);
    while(i <= m && j <= e) t[k++] = a[i] > a[j] ? a[i++] : a[j++];
    while(i <= m) t[k++] = a[i++];
    while(j <= e) t[k++] = a[j++];
    for(i=s; i<=e; i++) a[i] = t[i];
}