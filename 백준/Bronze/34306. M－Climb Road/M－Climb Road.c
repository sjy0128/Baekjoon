#include <stdio.h>

int main(void) {
    int a, b;
    scanf("%d\n%d", &a, &b);
    printf("%d", a*5280/b);
    return 0;
}