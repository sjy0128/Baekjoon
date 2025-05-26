#include <stdio.h>

int main(void) {
    int a, b;
    scanf("%d %d", &a, &b);
    printf("%d", a*b%(4840/5)==0 ? a*b/4840/5 : a*b/4840/5+1);
    return 0;
}