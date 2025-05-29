#include <stdio.h>

int main(void) {
    int n, temp, sum=0, i;
    scanf("%d", &n);
    for(i=0; i<n; i++) {
        scanf("%d", &temp);
        sum += temp;
    }
    printf("%d", sum);
    return 0;
}