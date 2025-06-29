#include <stdio.h>
#include <stdlib.h>

void sort(int *a, int s, int e), swap(int *a, int *b);

int main(void) {
    int n, i, max_d=0;
    scanf("%d", &n);
    int *t = (int *)malloc(sizeof(int) * n);
    for(i=0; i<n; i++) {
        scanf("%d", &t[i]);
    }
    sort(t, 0, n-1);
    for(i=0; i<n; i++) {
        if(i+2 + t[i] > max_d) max_d = i+2 + t[i];
    }
    printf("%d", max_d);
    free(t);
    return 0;
}

void sort(int *a, int s, int e) {
    int i=s, j;
    if(s >= e) return;
    for(j=s; j<=e; j++) {
        if(a[j] > a[e]) {
            swap(&a[i++], &a[j]);
        }
    }
    swap(&a[i], &a[e]);
    sort(a, s, i-1);
    sort(a, i+1, e);
}

void swap(int *a, int *b) {
    int temp = *a;
    *a = *b;
    *b = temp;
}