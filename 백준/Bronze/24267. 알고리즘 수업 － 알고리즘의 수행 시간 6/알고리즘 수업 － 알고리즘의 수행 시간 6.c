#include <stdio.h>

int main(void) {
    int n, i;
    long long sum=0, count=0;
    scanf("%d", &n);
    for(i=1; i<=n-2; i++) sum+=i;
    for(i=n-2; i>=1; i--) {
        count += sum;
        sum -= i;
    }
    printf("%lld\n3", count);
    return 0;
}