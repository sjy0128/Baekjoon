#include <stdio.h>
int main(void) {
    int a, b;
    scanf("%d %d", &a, &b);
    printf("%d", a-1 >= b ? b + b+1 : a + a-1);
    return 0;
}