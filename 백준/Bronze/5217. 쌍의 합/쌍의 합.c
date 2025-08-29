#include <stdio.h>

int main(void) {
    int t, n;
    scanf("%d", &t);
    while(t--) {
        scanf("%d", &n);
        printf("Pairs for %d: ", n);
        for(int i=1; i<=(n-1)/2; i++) {
            printf("%d %d", i, n-i);
            if(i != (n-1)/2) printf(", ");
        }
        printf("\n");
    }
    return 0;
}