#include <stdio.h>

int main(void) {
    int n, m, a[300][300], x, y, t, p, q;
    scanf("%d", &n);
    if(n % 2) {
        x = 0;
        y = n/2;
        for(int i=1; i<=n*n; i++) {
            a[x][y] = i;
            if(!a[x>=1 ? x-1 : n-1][(y+1)%n]) {
                x = x>=1 ? x-1 : n-1;
                y = (y+1)%n;
            } else x = (x+1)%n;
        }
    } else {
        if((n | 2) == n) {
            m = n/2;
            x = 0;
            y = m/2;
            for(int i=1; i<=m*m; i++) {
                a[x][y] = i;
                if(!a[x>=1 ? x-1 : m-1][(y+1)%m]) {
                    x = x>=1 ? x-1 : m-1;
                    y = (y+1)%m;
                } else x = (x+1)%m;
            }
            for(int i=1; i<4; i++) {
                for(int j=0; j<m; j++) {
                    for(int k=0; k<m; k++) {
                        a[j+(i%2)*m][k+(i==1||i==2)*m] = a[j][k] + m*m*i;
                    }
                }
            }
            for(int i=0; i<m; i++) {
                for(int j=0; j<m/2; j++) {
                    t = a[i][j+(i==m/2)];
                    a[i][j+(i==m/2)] = a[i+m][j+(i==m/2)];
                    a[i+m][j+(i==m/2)] = t;
                }
            }
            for(int i=0; i<m; i++) {
                for(int j=n-n/4+1; j<n; j++) {
                    t = a[i][j];
                    a[i][j] = a[i+m][j];
                    a[i+m][j] = t;
                }
            }
        } else {
            for(int i=1; i<=n; i++) {
                for(int j=1; j<=n; j++) {
                    p = i > n/4 && i <= n/4*3;
                    q = j > n/4 && j <= n/4*3;
                    if(!(p ^ q)) a[i-1][j-1] = (i-1)*n + j;
                }
            }
            for(int i=1; i<=n; i++) {
                for(int j=1; j<=n; j++) {
                    p = i > n/4 && i <= n/4*3;
                    q = j > n/4 && j <= n/4*3;
                    if(p ^ q) a[n-i][n-j] = (i-1)*n + j;
                }
            }
        }
    }
    for(int i=0; i<n; i++) {
        for(int j=0; j<n; j++) {
            printf("%d ", a[i][j]);
        }
        printf("\n");
    }
    return 0;
}