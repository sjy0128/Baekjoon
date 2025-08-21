#include <stdio.h>

int main(void) {
    long long n;
    scanf("%lld", &n);
    printf((n-1)%7==1||(n-1)%7==6 ? "CY" : "SK");
    return 0;
}