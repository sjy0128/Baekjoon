#include <stdio.h>

int main(void) {
    int n, r_ans = 2;
    scanf("%d", &n);
    while(n--) r_ans = r_ans * 2 - 1;
    printf("%d", r_ans * r_ans);
    return 0;
}