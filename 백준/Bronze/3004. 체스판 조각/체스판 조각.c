#include <stdio.h>

int main(void) {
    int a, b;
    scanf("%d", &a);
    b = a/2;
    a -= b++ -1;
    printf("%d", a*b);
    return 0;
}