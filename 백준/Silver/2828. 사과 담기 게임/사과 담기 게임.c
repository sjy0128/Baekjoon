#include <stdio.h>

int main(void) {
    int m, n, j, a, p = 1, sum = 0;
    scanf("%d %d\n%d", &m, &n, &j);
    for(int i = 0; i < j; i++) {
        scanf("%d", &a);
        if(a < p) {
            sum += p - a;
            p = a;
        } else if(a > p + n - 1) {
            sum += a - (p + n - 1);
            p = a - n + 1;
        }
    }
    printf("%d", sum);
    return 0;
}