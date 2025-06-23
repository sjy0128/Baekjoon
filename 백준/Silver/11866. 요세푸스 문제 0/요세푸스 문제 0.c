#include <stdio.h>

int main() {
    int n, k, a[1001], b=0, i, j;
    scanf("%d %d", &n, &k);
    for(i=1; i<=n; i++) a[i] = i;
    printf("<");
    for(i=0; i<n; i++) {
        for(j=0; j<k; j++) {
            if(a[++b] == -1) j--;
            if(b > n) {
                b = 1;
                if(a[1] == -1) j--;
            }
        }
        a[b] = -1;
        if(i == n-1) printf("%d>", b);
        else printf("%d, ", b);
    }
    return 0;
}