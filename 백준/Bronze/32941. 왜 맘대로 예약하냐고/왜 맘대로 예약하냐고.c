#include <stdio.h>

int main(void) {
    int t, x, n, k, a, i, j, can;
    scanf("%d %d\n%d", &t, &x, &n);
    for(i=0; i<n; i++) {
        scanf("%d", &k);
        can = 0;
        for(j=0; j<k; j++) {
            scanf("%d", &a);
            if(a == x) can = 1;
        }
        if(!can) {
            printf("NO");
            return 0;
        }
    }
    printf("YES");
    return 0;
}