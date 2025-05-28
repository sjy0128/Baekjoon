#include <stdio.h>

int main(void) {
    int a, b, c, d;
    scanf("%d %d %d %d", &a, &b, &c, &d);
    printf(a*b == c*d ? "E" : (a*b > c*d ? "M" : "P"));
    return 0;
}