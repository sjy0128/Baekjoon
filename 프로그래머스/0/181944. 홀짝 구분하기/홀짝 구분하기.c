#include <stdio.h>

int main(void) {
    int a;
    scanf("%d", &a);
    printf("%d is %s", a, a % 2 == 0 ? "even" : "odd");
    return 0;
}