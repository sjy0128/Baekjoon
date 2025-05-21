#include <stdio.h>

int main(void) {
    int a, b;
    scanf("%d\n%d", &a, &b);
    printf("%d", (a+b-1)%12+1);
    return 0;
}