#include <stdio.h>

int main(void) {
    int n, m, i, j;
    char b[10][10];
    scanf("%d %d", &n, &m);
    for(i=0; i<n; i++) {
        for(j=0; j<m; j++) {
            scanf(" %c", &b[i][j]);
        }
    }
    for(i=0; i<n; i++) {
        for(j=m-1; j>=0; j--) {
            printf("%c", b[i][j]);
        }
        printf("\n");
    }
    return 0;
}