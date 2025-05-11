#include <stdio.h>

int main(void) {
    int a, b, c, d, e, t=0;
    scanf("%d\n%d\n%d\n%d\n%d", &a, &b, &c, &d, &e);
    if(a < 0) t += -a * c;
    if(a <= 0) t += d + b * e;
    else t += (b - a) * e;
    printf("%d", t);
    return 0;
}