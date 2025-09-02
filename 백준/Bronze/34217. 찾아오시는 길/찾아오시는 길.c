#include <stdio.h>

int main(void) {
    int a, b, c, d;
    scanf("%d %d\n%d %d", &a, &b, &c, &d);
    printf(a+c == b+d ? "Either" : (a+c < b+d ? "Hanyang Univ." : "Yongdap"));
    return 0;
}