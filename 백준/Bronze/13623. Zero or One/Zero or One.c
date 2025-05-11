#include <stdio.h>

int main(void) {
    int a, b, c;
    scanf("%d %d %d", &a, &b, &c);
    if(a == b && b == c) printf("*");
    else if(a != b && b == c) printf("A");
    else if(b != c && c == a) printf("B");
    else printf("C");
    return 0;
}