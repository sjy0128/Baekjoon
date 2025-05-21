#include <stdio.h>

int main(void) {
    int x, y, a, b;
    char x1, y1;
    scanf("%c%d\n%c%d", &x1, &x, &y1, &y);
    a = x > y ? x - y : y - x;
    b = x1 > y1 ? x1 - y1 : y1 - x1;
    if(a >= b) printf("%d %d", b, a);
    else printf("%d %d", a, b);
    return 0;
}