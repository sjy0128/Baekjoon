#include <stdio.h>

int main(void) {
    int n;
    short m[1002][1002]={0,};
    char t;
    scanf("%d", &n);
    for(int i=1; i<=n; i++) {
        for(int j=1; j<=n; j++) {
            scanf(" %c", &t);
            if(t != '.') {
                m[i][j] = -1;
                for(int k=i-1; k<=i+1; k++) {
                    for(int l=j-1; l<=j+1; l++) {
                        if(m[k][l] != -1) m[k][l] += t-'0';
                    }
                }
            }
        }
    }
    for(int i=1; i<=n; i++) {
        for(int j=1; j<=n; j++) {
            if(m[i][j] >= 0 && m[i][j] <= 9) printf("%d", m[i][j]);
            else printf(m[i][j] == -1 ? "*" : "M");
        }
        printf("\n");
    }
    return 0;
}