#include <stdio.h>
int main(void) {
    int a, b;
    scanf("%d %d", &a, &b);
    printf("%d", a/2 < b ? a/2 : b);
    return 0;
}