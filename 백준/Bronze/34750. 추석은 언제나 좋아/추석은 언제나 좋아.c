#include <stdio.h>

int main(void) {
    int n, p;
    scanf("%d", &n);
    n /= 100;
    if(n >= 10000) p = 20;
    else if(n >= 5000) p = 15;
    else if(n >= 1000) p = 10;
    else p = 5;
    printf("%d %d", n * p, n * (100 - p));
    return 0;
}