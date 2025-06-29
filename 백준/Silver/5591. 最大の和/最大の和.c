#include <stdio.h>

int main(void) {
    int n, k, i, a[100000], sum=0, max;
    scanf("%d %d", &n, &k);
    for(i=0; i<n; i++) {
        scanf("%d", &a[i]);
    }
    for(i=0; i<k; i++) {
        sum += a[i];
    }
    max = sum;
    for(i=k; i<n; i++) {
        sum += a[i];
        sum -= a[i-k];
        if(sum > max) max = sum;
    }
    printf("%d", max);
    return 0;
}