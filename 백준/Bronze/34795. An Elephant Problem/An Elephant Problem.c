#include <stdio.h>

int main(void) {
    int m, p;
    scanf("%d %d", &m, &p);
    printf("%d", p / m + !!(p % m));
    return 0;
}