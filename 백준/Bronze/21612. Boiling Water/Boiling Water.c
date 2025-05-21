#include <stdio.h>

int main(void) {
    int b, kpa;
    scanf("%d", &b);
    kpa = 5 * b - 400;
    printf("%d\n%d", kpa, kpa == 100 ? 0 : (kpa < 100 ? 1 : -1));
    return 0;
}