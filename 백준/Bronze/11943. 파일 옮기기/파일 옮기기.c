#include <stdio.h>

int main(void) {
    int a1, a2, b1, b2;
    scanf("%d %d\n%d %d", &a1, &a2, &b1, &b2);
    printf("%d", a1 + b2 < a2 + b1 ? a1 + b2 : a2 + b1);
    return 0;
}