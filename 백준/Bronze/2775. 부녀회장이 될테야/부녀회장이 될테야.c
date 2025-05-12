#include <stdio.h>
 
int main(void) {
    int t, r, n, kn[15][15]={0,}, i, j, k;
    scanf("%d", &t);
    for(i=0; i<t; i++) {
        scanf("%d\n%d", &r, &n);
        for(j=0; j<=r; j++) {
            for(k=1; k<=n; k++) {
                kn[j][k] = (j == 0 ? k : kn[j][k-1] + kn[j-1][k]);
            }
        }
        printf("%d\n", kn[r][n]);
    }
    return 0;
}