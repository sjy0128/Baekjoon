#include <stdio.h>
#include <stdlib.h>

void merge_sort(int *a, int *b, int s, int e);
void merge(int *a, int *b, int m, int s, int e);

int main(void) {
    int n, t, i;
    scanf("%d %d", &n, &t);
    int *a = (int *)malloc(sizeof(int) * n);
    int *b = (int *)malloc(sizeof(int) * t);
    for(i=0; i<n; i++) scanf("%d", &a[i]);
    merge_sort(a, b, 0, t-1);
    for(i=0; i<n; i++) printf("%d ", a[i]);
    free(a);
    free(b);
    return 0;
}

void merge_sort(int *a, int *b, int s, int e) {
    int m = (s+e)/2;
    if(e-s+1 <= 1) return;
    merge_sort(a, b, s, m);
    merge_sort(a, b, m+1, e);
    merge(a, b, m+1, s, e);
}

void merge(int *a, int *b, int m, int s, int e) {
    int i=s, j=m, k=s;
    while(i < m && j <= e) {
        if(a[i] < a[j]) b[k++] = a[i++];
        else b[k++] = a[j++];
    }
    while(i < m) b[k++] = a[i++];
    while(j <= e) b[k++] = a[j++];
    for(k=s; k<=e; k++) a[k] = b[k];
}