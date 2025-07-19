#include <stdio.h>

int main(void) {
    int a, b, c, t;
    scanf("%d %d %d", &a, &b, &c);
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
    if(b - a == c - b) printf("%d", c+c-b);
    else if(b - a > c - b) printf("%d", a+c-b);
    else printf("%d", b+b-a);
    return 0;
}