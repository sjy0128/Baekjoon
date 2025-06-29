#include <stdio.h>

int main(void) {
    int n, i, j, rc=0, cc=0;
    char r[100][101];
    scanf("%d", &n);
    for(i=0; i<n; i++) {
        scanf("%s", r[i]);
    }
    for(i=0; i<n; i++) {
        for(j=0; j<n-1; j++) {
            if(r[i][j]=='.' && r[i][j+1]=='.') {
                cc++;
                for(j=j+1; r[i][j]=='.'&&j<n; j++);
            }
        }
    }
    for(j=0; j<n; j++) {
        for(i=0; i<n-1; i++) {
            if(r[i][j]=='.' && r[i+1][j]=='.') {
                rc++;
                for(i=i+1; r[i][j]=='.'&&i<n; i++);
            }
        }
    }
    printf("%d %d", cc, rc);
    return 0;
}