#include <stdio.h>

int main(void) {
    int k, n, s, d, di, vi, x, i, sum;
    scanf("%d", &k);
    for(x=1; x<=k; x++) {
        scanf("%d %d %d", &n, &s, &d);
        sum = 0;
        for(i=0; i<n; i++) {
            scanf("%d %d", &di, &vi);
            if(s * d >= di) sum += vi;
        }
        printf("Data Set %d:\n%d\n\n", x, sum);
    }
    return 0;
}