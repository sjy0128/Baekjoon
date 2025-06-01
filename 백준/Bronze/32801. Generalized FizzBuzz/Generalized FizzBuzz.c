#include <stdio.h>

int main(void) {
    int n, a, b, i, fibi=0, fi=0, bi=0;
    scanf("%d %d %d", &n, &a, &b);
    for(i=1; i<=n; i++) {
        if(i % a == 0 && i % b == 0) fibi++;
        else if(i % a == 0) fi++;
        else if(i % b == 0) bi++;
    }
    printf("%d %d %d", fi, bi, fibi);
    return 0;
}