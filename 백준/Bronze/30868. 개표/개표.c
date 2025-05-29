#include <stdio.h>
int main(void) {
    int t, n, i, j, k;
    scanf("%d", &t);
    for(i=0; i<t; i++) {
        scanf("%d", &n);
        for(j=n; j>0; j-=5) {
            if(j >= 5) printf("++++");
            else {
                for(k=0; k<j; k++) {
                    printf("|");
                }
            }
            printf(" ");
        }
        printf("\n");
    }
    return 0;
}