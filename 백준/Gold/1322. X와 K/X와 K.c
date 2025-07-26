#include <stdio.h>

int main(void) {
    int x, k, i, j, bx[32]={0,}, bk[32], by[64], lenx=0, lenk=0, leny;
    long long y=0, t;
    scanf("%d %d", &x, &k);
    for(lenx=0; x>0; x/=2, lenx++) {
        bx[lenx] = x % 2;
    }
    for(lenk=0; k>0; k/=2, lenk++) {
        bk[lenk] = k % 2;
    }
    i = 0;
    j = 0;
    while(j < lenk) {
        if(i < lenx && bx[i] == 1) by[i] = 0;
        else by[i] = bk[j++];
        i++;
    }
    leny = i;
    for(i=0, t=1; i<leny; i++, t*=2) {
        if(by[i]) y += t;
    }
    printf("%lld", y);
    return 0;
}