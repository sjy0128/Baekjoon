#include <stdio.h>

int main(void) {
    int n, c, r;
    scanf("%d", &n);
    for(int i=0; i<n; i++) {
        scanf("%d %d", &c, &r);
        for(int j=0; j<r; j++) {
            for(int k=0; k<c; k++) {
                printf("X");
            }
            printf("\n");
        }
        printf("\n");
    }
    return 0;
}