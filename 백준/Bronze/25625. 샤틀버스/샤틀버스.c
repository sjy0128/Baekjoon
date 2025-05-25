#include <stdio.h>

int main(void) {
    int x, y;
    scanf("%d %d", &x, &y);
    printf("%d", x > y ? x + y : y - x);
    return 0;
}