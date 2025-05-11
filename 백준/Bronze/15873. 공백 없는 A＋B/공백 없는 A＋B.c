#include <stdio.h>

int main(void) {
    int a;
    scanf("%d", &a);
    printf("%d", a >= 100 ? a%100 + (a%100==10 ? a/100 : a/10) : a/10 + a%10);
    return 0;
}