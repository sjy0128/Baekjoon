#include <stdio.h>

int main(void) {
    int x, y, z;
    scanf("%d\n%d\n%d", &x, &y, &z);
    printf(x + y <= z ? "1" : "0");
    return 0;
}