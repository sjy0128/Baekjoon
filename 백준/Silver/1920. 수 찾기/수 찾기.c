#include <stdio.h>
#include <stdlib.h>

void sort(int *a, int *t, int s, int e);

int main(void) {
    int n, m, i, j, num, exist, s, e, mid;
    scanf("%d", &n);
    int *a = (int *)malloc(sizeof(int) * n);
    int *t = (int *)malloc(sizeof(int) * n);
    for(i=0; i<n; i++) scanf("%d", &a[i]);
    sort(a, t, 0, n-1);
    scanf("%d", &m);
    for(i=0; i<m; i++) {
        scanf("%d", &num);
        exist = 0;
        s = 0;
        e = n-1;
        while(s <= e) {
            mid = (s+e)/2;
            if(num == a[mid]) {
                exist = 1;
                break;
            } else if(num > a[mid]) s = mid+1;
            else e = mid-1;
        }
        printf("%d\n", exist);
    }
    free(a);
    free(t);
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