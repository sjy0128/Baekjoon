#include <stdio.h>
int main() {
    int n, m, a[301][301]={0,}, i, j, temp, k, x1, y1, x2, y2;
    scanf("%d %d", &n, &m);
    for(i=1; i<=n; i++) {
        for(j=1; j<=m; j++) {
            scanf("%d", &temp);
            a[i][j] = temp + a[i][j-1] + a[i-1][j] - a[i-1][j-1];
        }
    }
    scanf("%d", &k);
    for(i=0; i<k; i++) {
        scanf("%d %d %d %d", &x1, &y1, &x2, &y2);
        printf("%d\n", a[x2][y2] - a[x1-1][y2] - a[x2][y1-1] + a[x1-1][y1-1]);
    }
    return 0;
}