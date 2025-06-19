#include <stdio.h>

int main() {
    int r, c, w, a[30][30], i, j, sum=0;
    scanf("%d %d %d", &r, &c, &w);
    for(i=0; i<(r+w>c+w?r+w:c+w); i++) {
        for(j=0; j<=i; j++) {
            if(j == 0 || j == i) a[i][j] = 1;
            else a[i][j] = a[i-1][j-1] + a[i-1][j];
        }
    }
    for(i=r-1; i<r+w-1; i++) {
        for(j=c-1; j<c+i-r+1; j++) {
            sum += a[i][j];
        }
    }
    printf("%d", sum);
    return 0;
}