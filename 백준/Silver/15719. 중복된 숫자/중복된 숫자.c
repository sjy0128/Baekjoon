#include <stdio.h>

int main(void) {
    int n, i, a;
    long long sum1=0, sum2=0;
    scanf("%d", &n);
    for(i=0; i<n; i++) {
        scanf("%d", &a);
        sum2 += a;
        if(i < n-1) sum1 += i+1;
    }
    printf("%lld", sum2 - sum1);
    return 0;
}