#include <stdio.h>

int main(void) {
    int g, t=0;
    long long int a=1, b=2;
    scanf("%d", &g);
    while(a < b) {
        if(b*b - a*a == g) {
            t = 1;
            printf("%lld\n", b);
        }
        if(b*b - a*a >= g) a++;
        else b++;
    }
    if(!t) printf("-1");
    return 0;
}