#include <stdio.h>

int main(void) {
    int n, ai, sum = 0, mon = 1000;
    scanf("%d", &n);
    while(n--) {
        scanf("%d", &ai);
        sum += ai;
        if(ai % 2 && ai < mon) mon = ai;
    }
    printf("%d", sum % 2 ? sum - mon : sum);
    return 0;
}