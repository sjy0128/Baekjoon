#include <stdio.h>

int main(void) {
    int n, i, j;
    scanf("%d", &n);
    for(i=0; i<n; i++) {
        for(j=0; j<n*5; j++) {
            printf("@");
        }
        printf("\n");
    }
    for(i=0; i<n*4; i++) {
        for(j=0; j<n; j++) {
            printf("@");
        }
        printf("\n");
    }
    return 0;
}