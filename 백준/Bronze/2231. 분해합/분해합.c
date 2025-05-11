#include <stdio.h>
int main(void) {
    int n, i, j, sum;
    scanf("%d", &n);
    for(i=0; i<=n-1; i++) {
        sum = 0;
        for(j=i; j>=10; j/=10) {
            sum += j%10;
        }
        sum += j;
        if(i + sum == n) {
            printf("%d", i);
            return 0;
        }
    }
    printf("0");
    return 0;
}