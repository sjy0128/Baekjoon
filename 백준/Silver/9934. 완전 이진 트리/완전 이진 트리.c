#include <stdio.h>

int main(void) {
    int k, a[1024], x;
    scanf("%d", &k);
    for(int i=0; i<(1<<k)-1; i++) scanf("%d", &a[i]);
    for(int i=0; i<k; i++) {
        x = 1<<(k-i);
        for(int j=0; j<(1<<i); j++) {
            printf("%d ", a[x/2-1+x*j]);
        }
        printf("\n");
    }
    return 0;
}