#include <stdio.h>

int main(void) {
    int a, b, c;
    scanf("%d %d\n%d", &a, &b, &c);
    printf("%d", a+b >= c*2 ? a+b-c*2 : a+b);
    return 0;
}