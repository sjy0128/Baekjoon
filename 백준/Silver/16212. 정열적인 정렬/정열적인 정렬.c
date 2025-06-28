#include <stdio.h>
#include <stdlib.h>

void sort(int *arr, int s, int e);
 
int main(void) {
    int n, i;
    scanf("%d", &n);
    int *a = (int *)malloc(sizeof(int)*n);
    for(i=0; i<n; i++) {
        scanf("%d", &a[i]);
    }
    sort(a, 0, n-1);
    for(i=0; i<n; i++) {
        printf("%d ", a[i]);
    }
    free(a);
    return 0;
}

void sort(int *arr, int s, int e) {
    int mid=s+(e-s)/2, i, li=s, ri=mid+1, ai=0;
    if(s == e) return;
    int *arr2 = (int *)malloc(sizeof(int)*(e-s+1));
    sort(arr, s, mid);
    sort(arr, mid+1, e);
    while(li <= mid && ri <= e) {
        if(arr[li] < arr[ri]) {
            arr2[ai++] = arr[li++];
        } else {
            arr2[ai++] = arr[ri++];
        }
    }
    while(li <= mid) {
        arr2[ai++] = arr[li++];
    }
    while(ri <= e) {
        arr2[ai++] = arr[ri++];
    }
    for(i=s; i<=e; i++) arr[i] = arr2[i-s];
    free(arr2);
    return;
}