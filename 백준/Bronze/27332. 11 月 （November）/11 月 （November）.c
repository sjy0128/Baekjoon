#include <stdio.h>

int main(void) {
    int a, b;
    scanf("%d\n%d", &a, &b);
    printf("%d", a + b*7 <= 30);
    return 0;
}