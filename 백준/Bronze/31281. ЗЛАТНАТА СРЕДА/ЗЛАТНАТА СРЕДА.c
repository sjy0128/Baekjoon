#include <stdio.h>
int main(void) {
    long long int a, b, c, temp;
    scanf("%lld %lld %lld", &a, &b, &c);
    if(a > b) {
        temp = a;
        a = b;
        b = temp;
    }
    if(a > c) {
        temp = a;
        a = c;
        c = temp;
    }
    if(b > c) {
        temp = b;
        b = c;
        c = temp;
    }
    printf("%lld", b);
    return 0;
}