#include <stdio.h>

int div_ceil(int a, int b) {return a % b == 0 ? a/b : a/b+1;}

int main(void) {
    int l, a, b, c, d;
    scanf("%d\n%d\n%d\n%d\n%d", &l, &a, &b, &c, &d);
    printf("%d", l - (a/c > b/d ? div_ceil(a, c) : div_ceil(b, d)));
    return 0;
}