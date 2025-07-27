#include <stdio.h>

int main(void) {
    int a, b, c, t;
    while(1) {
        scanf("%d %d %d", &a, &b, &c);
        if(!a && !b && !c) break;
        if(a > b) {
            t = a;
            a = b;
            b = t;
        }
        if(a > c) {
            t = a;
            a = c;
            c = t;
        }
        if(b > c) {
            t = b;
            b = c;
            c = t;
        }
        if(a + b <= c) printf("Invalid\n");
        else if(a == b && b == c) printf("Equilateral\n");
        else if(a == b || b == c || c == a) printf("Isosceles\n");
        else printf("Scalene\n");
    }
    return 0;
}