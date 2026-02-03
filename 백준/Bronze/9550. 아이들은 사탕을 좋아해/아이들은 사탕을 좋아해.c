#include <stdio.h>

int main(void) {
    int t, n, k, ci, sum;
    scanf("%d", &t);
    while(t--) {
        scanf("%d %d", &n, &k);
        sum = 0;
        while(n--) {
            scanf("%d", &ci);
            sum += ci / k;
        }
        printf("%d\n", sum);
    }
    return 0;
}