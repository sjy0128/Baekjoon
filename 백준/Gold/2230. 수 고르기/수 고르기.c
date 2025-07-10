#include <stdio.h>
#include <stdlib.h>

int abs(int a);
void sort(int *a, int *b, int s, int e);

int main(void) {
    int n, m, i, j, p1=0, p2=0, t, min=2000000000;
    scanf("%d %d", &n, &m);
    int *a = (int *)malloc(sizeof(int) * n);
    int *b = (int *)malloc(sizeof(int) * n);
    for(i=0; i<n; i++) {
        scanf("%d", &a[i]);
    }
    sort(a, b, 0, n-1);
    free(b);
    while(p2 >= p1 && p2 < n) {
        t = abs(a[p2] - a[p1]);
        if(t >= m) {
            if(t < min) min = t;
            p1++;
        } else p2++;
    }
    printf("%d", min);
    free(a);
    return 0;
}

int abs(int a) {return a < 0 ? -a : a;}

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