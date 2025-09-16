#include <stdio.h>

int main(void) {
    int k, a[32], i, j;
    scanf("%d", &k);
    k--;
    for(i=0, j=2; k>=0; i++, j*=2) {
        a[i] = k % j < j/2 ? 4 : 7;
        k -= j;
    }
    for(i--; i>=0; i--) printf("%d", a[i]);
    return 0;
}