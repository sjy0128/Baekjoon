#include <stdio.h>

int main(void) {
    int n, num, sum = 0, ans = -1000;
    scanf("%d", &n);
    while(n--) {
        scanf("%d", &num);
        sum = (sum > 0 ? sum : 0) + num;
        if(sum > ans) ans = sum;
    }
    printf("%d", ans);
    return 0;
}