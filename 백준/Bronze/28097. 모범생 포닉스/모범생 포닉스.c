#include <stdio.h>

int main(void) {
    int n, temp, sum=0, i;
    scanf("%d", &n);
    for(i=0; i<n; i++) {
        scanf("%d", &temp);
        sum += temp;
    }
    sum += (n-1)*8;
    printf("%d %d", sum/24, sum%24);
    return 0;
}