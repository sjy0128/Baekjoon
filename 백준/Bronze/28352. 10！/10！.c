#include <stdio.h>

long long int fact(int n) {
    if(n == 1) return 1;
    return (long long int)n*fact(n-1);
}

int main(void) {
    int n;
    scanf("%d", &n);
    printf("%lld",fact(n)/(7*24*60*60));
    return 0;
}