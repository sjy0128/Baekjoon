#include <stdio.h>

int main(void) {
    int w1, h1, w2, h2;
    scanf("%d\n%d\n%d\n%d", &w1, &h1, &w2, &h2);
    printf("%d", (w1+2)*(h1+(w1>w2 ? 2 : 0)) + (w2+2)*(h2+(w1>w2 ? 0 : 2)) - w1*h1 - w2*h2);
    return 0;
}