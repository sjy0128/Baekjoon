#include <stdio.h>

int main() {
    int a, b, c;
    scanf("%d\n%d\n%d", &a, &b, &c);
    printf(a + b == c || b + c == a || c + a == b ? "1" : "0");
    return 0;
}