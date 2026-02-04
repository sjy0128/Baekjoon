#include <stdio.h>

int diff(int a, int b, int c) { return a == b ? c : (a == c ? b : a); }

int main(void) {
    int x1, y1, x2, y2, x3, y3;
    scanf("%d %d\n%d %d\n%d %d", &x1, &y1, &x2, &y2, &x3, &y3);
    printf("%d %d", diff(x1, x2, x3), diff(y1, y2, y3));
    return 0;
}