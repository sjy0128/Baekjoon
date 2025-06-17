#include <stdio.h>

int abs(int a) {return a > 0 ? a : -a;}

int main(void) {
    int n, m, i, j, l[100], k, sum, count=0;
    scanf("%d %d", &n, &m);
    for(i=0; i<m; i++) {
        scanf("%d", &l[i]);
    }
    for(i=0; i<n-1; i++) {
        sum = 0;
        for(j=0; j<m; j++) {
            scanf("%d", &k);
            sum += abs(l[j] - k);
        }
        if(sum > 2000) count++;
    }
    printf(count >= n/2 ? "YES" : "NO");
    return 0;
}