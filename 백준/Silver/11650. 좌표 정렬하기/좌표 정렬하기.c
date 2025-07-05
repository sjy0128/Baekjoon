#include <stdio.h>
#include <stdlib.h>

void merge_sort(int *a, int *b, int *c, int *d, int s, int e);
void merge(int *a, int *b, int *c, int *d, int m, int s, int e);

int main(void) {
    int n, i;
    scanf("%d", &n);
    int *x = (int *)malloc(sizeof(int) * n);
    int *y = (int *)malloc(sizeof(int) * n);
    int *xt = (int *)malloc(sizeof(int) * n);
    int *yt = (int *)malloc(sizeof(int) * n);
    for(i=0; i<n; i++) scanf("%d %d", &x[i], &y[i]);
    merge_sort(x, y, xt, yt, 0, n-1);
    for(i=0; i<n; i++) printf("%d %d\n", x[i], y[i]);
    free(x);
    free(y);
    free(xt);
    free(yt);
    return 0;
}

void merge_sort(int *a, int *b, int *c, int *d, int s, int e) {
    int m = (s+e)/2;
    if(e-s+1 <= 1) return;
    merge_sort(a, b, c, d, s, m);
    merge_sort(a, b, c, d, m+1, e);
    merge(a, b, c, d, m+1, s, e);
}

void merge(int *a, int *b, int *c, int *d, int m, int s, int e) {
    int i=s, j=m, k=s;
    while(i < m && j <= e) {
        if(a[i] < a[j] || a[i] == a[j] && b[i] < b[j]) {
            c[k] = a[i];
            d[k++] = b[i++];
        } else {
            c[k] = a[j];
            d[k++] = b[j++];
        }
    }
    while(i < m) {
        c[k] = a[i];
        d[k++] = b[i++];
    }
    while(j <= e) {
        c[k] = a[j];
        d[k++] = b[j++];
    }
    for(k=s; k<=e; k++) {
        a[k] = c[k];
        b[k] = d[k];
    }
}