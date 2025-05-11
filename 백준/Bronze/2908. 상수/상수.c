#include <stdio.h>

int sangsu(int n) {
    return n/100 + (n%100)/10*10 + n%10*100;
}

int main(void) {
    int a, b;
    scanf("%d %d", &a, &b);
    a = sangsu(a);
    b = sangsu(b);
    printf("%d", a > b ? a : b);
    return 0;
}