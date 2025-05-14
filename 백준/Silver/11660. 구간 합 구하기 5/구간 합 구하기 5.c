#include <stdio.h>

int main() {
    int n, m, i, j, arr[1025][1025], sum[1025][1025]={0,}, x1, y1, x2, y2;
    scanf("%d %d", &n, &m);
    for(i=1; i<=n; i++) {
        for(j=1; j<=n; j++) {
            scanf("%d", &arr[i][j]);
        }
    }
    for(i=1; i<=n; i++) {
        for(j=1; j<=n; j++) {
            sum[i][j] = sum[i-1][j] + sum[i][j-1] - sum[i-1][j-1] + arr[i][j];
        }
    }
    for(i=0; i<m; i++) {
        scanf("%d %d %d %d", &x1, &y1, &x2, &y2);
        printf("%d\n", sum[x1-1][y1-1] - sum[x1-1][y2] - sum[x2][y1-1] + sum[x2][y2]);
    }
    return 0;
}