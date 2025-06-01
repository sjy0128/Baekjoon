#include <stdio.h>

int main(void) {
    int x;
    scanf("%d", &x);
    printf("%d", x % 2 == 0 ? x/2 : x/2+3);
    return 0;
}