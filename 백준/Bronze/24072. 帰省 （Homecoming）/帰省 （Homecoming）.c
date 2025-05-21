#include <stdio.h>

int main(void) {
    int a, b, c;
    scanf("%d %d %d", &a, &b, &c);
    printf(c >= a && c < b ? "1" : "0");
    return 0;
}