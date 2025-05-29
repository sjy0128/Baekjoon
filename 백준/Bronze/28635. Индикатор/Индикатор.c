#include <stdio.h>

int main(void) {
    int m, a, b;
    scanf("%d\n%d\n%d", &m, &a, &b);
    printf("%d", b-a + (b < a ? m : 0));
    return 0;
}