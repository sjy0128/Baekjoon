#include <stdio.h>

int main(void) {
    long long n;
    scanf("%lld", &n);
    if(n >= -(1<<15) && n <= (1<<15)-1) printf("short");
    else if(n >= -(1<<31) && n <= (1<<31)-1) printf("int");
    else printf("long long");
    return 0;
}