#include <stdio.h>

int main(void) {
    int k, c=0, r=0;
    scanf("%d", &k);
    while(k != 1) {
        for(int i=2; i<=k; i++) {
            if(!(k % i)) {
                c++;
                k /= i;
                break;
            }
        }
    }
    for(int i=1; c>i; i*=2) r++;
    printf("%d", r);
    return 0;
}