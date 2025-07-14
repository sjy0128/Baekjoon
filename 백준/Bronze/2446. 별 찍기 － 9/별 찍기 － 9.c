#include <stdio.h>

int main(void) {
    int n, i, j;
    scanf("%d", &n);
    for(i=0; i<n; i++) {
        for(j=0; j<i; j++) printf(" ");
        for(j=0; j<(n-i)*2-1; j++) printf("*");
        printf("\n");
    }
    for(i=n-2; i>=0; i--) {
        for(j=0; j<i; j++) printf(" ");
        for(j=0; j<(n-i)*2-1; j++) printf("*");
        printf("\n");
    }
    return 0;
}