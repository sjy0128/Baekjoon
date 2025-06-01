#include <stdio.h>

int main(void) {
    int a, b, c, d;
    scanf("%d %d\n%d %d", &a, &b, &c, &d);
    printf("%d", ((a+b-1)%4+1-1 + (c+d-1)%4+1-1)%4+1);
    return 0;
}