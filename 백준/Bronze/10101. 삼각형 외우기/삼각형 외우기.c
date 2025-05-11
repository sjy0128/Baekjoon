#include <stdio.h>

int main(void) {
    int a, b, c;
    scanf("%d\n%d\n%d", &a, &b, &c);
    if(a == b && b == c && a == 60) printf("Equilateral");
    else if(a + b + c == 180) {
        if(a == b || b == c || a == c) printf("Isosceles");
        else printf("Scalene");
    } else printf("Error");
    return 0;
}