#include <stdio.h>

int main(void) {
    int n, ai, bi, a_ans = 0, b_ans = 0;
    scanf("%d", &n);
    while(n--) {
        scanf("%d %d", &ai, &bi);
        if(ai == bi) a_ans += ai, b_ans += bi;
        else if(ai > bi) a_ans += ai + bi;
        else b_ans += ai + bi;
    }
    printf("%d %d", a_ans, b_ans);
    return 0;
}