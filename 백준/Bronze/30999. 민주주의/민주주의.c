#include <stdio.h>
int main(void) {
    int n, m, i, j, o, x, count=0;
    char ox[100];
    scanf("%d %d", &n, &m);
    for(i=0; i<n; i++) {
        scanf("%s", ox);
        o = 0;
        x = 0;
        for(j=0; j<m; j++) {
            if(ox[j] == 'O') o++;
            else x++;
        }
        if(o > x) count++;
    }
    printf("%d", count);
    return 0;
}