#include <stdio.h>

int main(void) {
    int n, m, t, k, a, b, S[101][101]={0,}, s, x, y;
    char g[100][100];
    scanf("%d %d %d\n%d %d %d", &n, &m ,&t, &k, &a, &b);
    for(int i=0; i<n; i++) {
        scanf("%s", g[i]);
    }
    while(t--) {
        for(int i=0; i<n; i++) {
            for(int j=0; j<m; j++) {
                S[i+1][j+1] = S[i][j+1] + S[i+1][j] - S[i][j] + (g[i][j] == '*');
            }
        }
        for(int i=0; i<n; i++) {
            for(int j=0; j<m; j++) {
                s = S[x = i >= n-k ? n : i+1+k][y = j >= m-k ? m : j+1+k];
                if(i>k) s -= S[i-k][y];
                if(j>k) s -= S[x][j-k];
                if(i>k && j>k) s += S[i-k][j-k];
                g[i][j] = s>a && s-(g[i][j]=='*')<=b ? '*':'.';
            }
        }
    }
    for(int i=0; i<n; i++) {
        for(int j=0; j<m; j++) printf("%c", g[i][j]);
        printf("\n");
    }
    return 0;
}