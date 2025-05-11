#include <stdio.h>

int main(void) {
    int ca, ba, pa, cr, br, pr;
    scanf("%d %d %d\n%d %d %d", &ca, &ba, &pa, &cr, &br, &pr);
    printf("%d", (cr>ca ? cr-ca : 0)+(br>ba ? br-ba : 0)+(pr>pa ? pr-pa : 0));
    return 0;
}