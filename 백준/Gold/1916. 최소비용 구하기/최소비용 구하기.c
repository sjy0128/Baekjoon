#include <stdio.h>
#define TRUE 1
#define FALSE 0
#define INF 2100000000
#define MAX 1001

long long d[MAX];
int S[MAX];
int w[MAX][MAX];

int main(void) {
    int n, m, a, b, u, v, c, min, minp;
    scanf("%d\n%d", &n, &m);
    for(int i=0; i<n; i++) {
        for(int j=0; j<n; j++) w[i][j] = i == j ? 0 : INF;
    }
    while(m--) {
        scanf("%d %d %d", &u, &v, &c);
        if(c < w[u-1][v-1]) w[u-1][v-1] = c;
    }
    scanf("%d %d", &a, &b);
    for(int i=0; i<n; i++) {
        d[i] = w[a-1][i];
        S[i] = FALSE;
    }
    S[a-1] = TRUE;
    d[a-1] = 0;
    for(int i=0; i<n-1; i++) {
        min = INF, minp = -1;
        for(int j=0; j<n; j++) {
            if((d[j] < min) && !S[j]) {
                min = d[j];
                minp = j;
            }
        }
        S[minp] = TRUE;
        for(int j=0; j<n; j++) {
            if(!S[j]) {
                if(d[minp] + w[minp][j] < d[j]) d[j] = d[minp] + w[minp][j];
            }
        }
    }
    printf("%lld", d[b-1]);
    return 0;
}