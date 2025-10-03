#include <stdio.h>

int main(void) {
    int n, m, g[100][100]={0,}, a, b, qu[10000], s=0, e=0, c, v[100]={0,}, r=-1;
    scanf("%d\n%d", &n, &m);
    for(int i=0; i<m; i++) {
        scanf("%d %d", &a, &b);
        g[a-1][b-1] = 1;
        g[b-1][a-1] = 1;
    }
    qu[0] = 0;
    while(s <= e) {
        c = qu[s++];
        if(!v[c]) {
            v[c] = 1;
            r++;
            for(int i=0; i<n; i++) {
                if(g[c][i]) qu[++e] = i;
            }
        }
    }
    printf("%d", r);
    return 0;
}