#include <stdio.h>

int main(void) {
    int a, b;
    scanf("%d\n%d", &a, &b);
    printf("%d", a < b ? a*50 : b*50);
    return 0;
}