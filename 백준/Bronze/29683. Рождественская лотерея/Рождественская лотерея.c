#include <stdio.h>

int main(void) {
    int n, A, a, i, sum=0;
    scanf("%d %d", &n, &A);
    for(i=0; i<n; i++) {
        scanf("%d", &a);
        sum += a / A;
    }
    printf("%d", sum);
    return 0;
}