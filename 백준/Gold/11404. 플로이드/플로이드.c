#include <stdio.h>
#define MAX 100
#define INF 10000000

int min(int a, int b) {return a < b ? a : b;}

int main(void) {
    int w[MAX][MAX], n, m, a, b, c;
    scanf("%d\n%d", &n, &m);
    for(int i=0; i<n; i++) {
        for(int j=0; j<n; j++) w[i][j] = i == j ? 0 : INF;
    }
    while(m--) {
        scanf("%d %d %d", &a, &b, &c);
        w[a-1][b-1] = min(w[a-1][b-1], c);
    }
    for(int i=0; i<n; i++) {
        for(int j=0; j<n; j++) {
            for(int k=0; k<n; k++) {
                w[j][k] = min(w[j][k], w[j][i] + w[i][k]);
            }
        }
    }
    for(int i=0; i<n; i++) {
        for(int j=0; j<n; j++) printf("%d ", w[i][j] == INF ? 0 : w[i][j]);
        printf("\n");
    }
    return 0;
}