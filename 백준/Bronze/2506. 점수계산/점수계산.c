#include <stdio.h>

int main(void) {
    int n, ox, streak = 0, sum = 0;
    scanf("%d", &n);
    for(int i = 0; i < n; i ++) {
        scanf("%d", &ox);
        if(ox) sum += ++streak;
        else streak = 0;
    }
    printf("%d", sum);
    return 0;
}