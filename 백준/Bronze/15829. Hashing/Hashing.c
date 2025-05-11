#include <stdio.h>
#define M 1234567891

int main(void) {
    int l, i;
    long long hash=0, ri=1;
    char temp;
    scanf("%d", &l);
    for(i=0; i<l; i++) {
        scanf(" %c", &temp);
        hash += ri * (temp - 'a' + 1);
        ri *= 31;
        if(hash >= M) hash %= M;
        if(ri >= M) ri %= M;
    }
    printf("%lld", hash);
    return 0;
}