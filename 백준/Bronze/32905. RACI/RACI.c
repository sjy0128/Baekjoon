#include <stdio.h>

int main(void) {
    int n, m, i, j, a;
    char l;
    scanf("%d %d\n", &n, &m);
    for(i=0; i<n; i++) {
        a = 0;
        for(j=0; j<m; j++) {
            scanf("%c ", &l);
            if(l == 'A') a++;
        }
        if(a != 1) {
            printf("No");
            return 0;
        }
    }
    printf("Yes");
    return 0;
}