#include <stdio.h>

int main() {
    int N, i, j, gn=1, nc;
    char n[20][61], m[20][20];
    while(1) {
        scanf("%d", &N);
        if(N == 0) break;
        nc = 0;
        for(i=0; i<N; i++) {
            scanf("%s ", n[i]);
            for(j=0; j<N-1; j++) {
                scanf("%c ", &m[i][j]);
                if(m[i][j] == 'N') nc++;
            }
        }
        printf("Group %d\n", gn++);
        if(nc == 0) printf("Nobody was nasty\n");
        else {
            for(i=0; i<N; i++) {
                for(j=0; j<N-1; j++) {
                    if(m[i][j] == 'N') printf("%s was nasty about %s\n", n[(N+i-j-1)%N], n[i]);
                }
            }
        }
        printf("\n");
    }
    return 0;
}