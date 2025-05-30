#include <stdio.h>

int main(void) {
    int n, i, a[1001], sum, max;
    while(1) {
        scanf("%d", &n);
        if(n == 0) break;
        sum = 0;
        max = 0;
        for(i=0; i<n; i++) {
            scanf("%d", &a[i]);
            sum += a[i];
            if(i >= 3) sum -= a[i-3];
            if(sum > max) max = sum;
        }
        printf("%d\n", max);
    }
    return 0;
}