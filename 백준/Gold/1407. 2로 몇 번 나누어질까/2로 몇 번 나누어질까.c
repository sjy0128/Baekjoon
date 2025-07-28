#include <stdio.h>

int main(void) {
    long long a, b, c=1, r[50]={0,}, s=0;
    int i, l;
    scanf("%lld %lld", &a, &b);
    for(i=0; b>0; i++, b/=2) r[i] = (b+1)/2;
    l = i;
    l = i;
    for(i=0, a-=1; a>0; i++, a/=2) r[i] -= (a+1)/2;
    for(i=0, c=1; i<l; i++, c*=2) s += r[i]*c;
    printf("%lld", s);
    return 0;
}