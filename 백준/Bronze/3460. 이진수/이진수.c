#include <stdio.h>

int main(void) {
    int t, n;
    scanf("%d", &t);
    while(t--) {
        scanf("%d", &n);
        for(int i = 0, j; n; i++) {
            if(n % ((j = 1 << i) * 2)) {
                n -= j;
                printf("%d ", i);
            }
        }
        printf("\n");
    }
    return 0;
}