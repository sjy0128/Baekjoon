#include <stdio.h>

int main(void) {
    int n, m, i, a=1, b=1000000000;
    scanf("%d %d", &n, &m);
    if(n == 1 && m == 1) {
        printf("-1");
        return 0;
    }
    if(n == 2 && m == 1) {
        printf("1 4\n2");
        return 0;
    }
    if(n <= m) {
        for(i=0; i<n; i++) {
            printf("%d ", b-m-i);
        }
        printf("\n");
        for(i=0; i<m-1; i++) {
            printf("%d ", b-i);
        }
        printf("1 ");
    } else {
        for(i=0; i<n-1; i++) {
            printf("%d ", b-i);
        }
        printf("1 ");
        printf("\n");
        for(i=0; i<m; i++) {
            printf("%d ", b-n-i);
        }
    }
    
    return 0;
}