#include <stdio.h>

int main(void) {
    int a, b, c;
    scanf("%d %d %d", &a, &b, &c);
    if(a + b == c || b + c == a || c + a == b) printf("1");
    else if(a * b == c || b * c == a || c * a == b) printf("2");
    else printf("3");
    return 0;
}