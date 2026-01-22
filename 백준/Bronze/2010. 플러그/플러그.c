#include <stdio.h>

int main(void) {
    int n, d, sum;
    scanf("%d", &n);
    sum = -n + 1;
    while(n--) {
        scanf("%d", &d);
        sum += d;
    }
    printf("%d", sum);
    return 0;
}