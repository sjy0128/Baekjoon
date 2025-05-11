#include <stdio.h>

int main(void) {
    int n, m, c[100], i, j, k, sum, max=0;
    scanf("%d %d", &n, &m);
    for(i=0; i<n; i++) scanf("%d", &c[i]);
    for(i=0; i<n-2; i++) {
        for(j=i+1; j<n-1; j++) {
            for(k=j+1; k<n; k++) {
                sum = c[i] + c[j] + c[k];
                if(sum > max && sum <= m) max = sum;
            }
        }
    }
    printf("%d", max);
    return 0;
}