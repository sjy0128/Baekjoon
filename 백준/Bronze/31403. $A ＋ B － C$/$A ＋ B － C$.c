#include <stdio.h>

int main(void) {
    int a, b, c, i;
    scanf("%d\n%d\n%d", &a, &b, &c);
    printf("%d\n", a + b - c);
    for(i=1; i<=b; i*=10);
    printf("%d", a*i+b - c);
    return 0;
}