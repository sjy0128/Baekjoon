#include <stdio.h>

int main(void) {
    int n, k, p, i, j, b, c1, c2=0;
    scanf("%d %d %d", &n, &k, &p);
    for(i=0; i<n; i++) {
        c1 = 0;
        for(j=0; j<k; j++) {
            scanf("%d", &b);
            if(b == 0) c1++;
        }
        if(c1 < p) c2++;
    }
    printf("%d", c2);
    return 0;
}