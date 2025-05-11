#include <stdio.h>

int main(void) {
    long long int a, b;
    scanf("%lld %lld", &a, &b);
    if(a % 2 == 0 || b % 2 == 0) printf("0");
    else printf("%lld", a > b ? b : a);
    return 0;
}