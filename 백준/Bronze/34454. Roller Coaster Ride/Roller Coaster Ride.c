#include <stdio.h>

int main(void) {
    int a, b, c;
    scanf("%d\n%d\n%d", &a, &b, &c);
    printf(a <= b * c ? "yes" : "no");
    return 0;
}