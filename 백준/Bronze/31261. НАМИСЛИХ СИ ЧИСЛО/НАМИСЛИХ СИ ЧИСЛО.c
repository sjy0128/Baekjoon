#include <stdio.h>
int main(void) {
    int a, b;
    scanf("%d %d", &a, &b);
    printf("%d", ((b+a)*a+a)*a);
    return 0;
}