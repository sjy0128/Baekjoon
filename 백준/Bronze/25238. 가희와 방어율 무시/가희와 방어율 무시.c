#include <stdio.h>

int main(void) {
    int a, b;
    scanf("%d %d", &a, &b);
    printf((double)a*(100-b)/100 < 100 ? "1" : "0");
    return 0;
}