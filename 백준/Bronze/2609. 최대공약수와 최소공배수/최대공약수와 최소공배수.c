#include <stdio.h>

int f(int a, int b) {
    if(a%b == 0) return b;
    return f(b, a%b);
}

int main(void) {
    int a, b;
    scanf("%d %d", &a, &b);
    printf("%d\n%d", f(a, b), a*b/f(a, b));
    return 0;
}