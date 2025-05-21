#include <stdio.h>

int main(void) {
    int n, m, i, j, count=0;
    char a[100][100], temp;
    scanf("%d %d", &n, &m);
    for(i=0; i<n; i++) {
        for(j=0; j<m; j++) {
            scanf(" %c", &a[i][j]);
        }
    }
    for(i=0; i<n; i++) {
        for(j=0; j<m; j++) {
            scanf(" %c", &temp);
            if(temp == a[i][j]) count++;
        }
    }
    printf("%d", count);
    return 0;
}