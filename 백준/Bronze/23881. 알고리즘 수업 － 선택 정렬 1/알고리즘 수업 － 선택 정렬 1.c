#include <stdio.h>

int main() {
    int n, K, a[10001], i, j, k=0, max_idx, temp, c=0;
    scanf("%d %d", &n, &K);
    for(i=0; i<n; i++) scanf("%d", &a[i]);
    for(i=n; i>=1; i--) {
        max_idx = 0;
        for(j=0; j<i; j++) {
            if(a[j] > a[max_idx]) max_idx = j;
        }
        if(a[i-1] != a[max_idx]) {
            k++;
            temp = a[i-1];
            a[i-1] = a[max_idx];
            a[max_idx] = temp;
        }
        if(k == K) {
            printf("%d %d", a[max_idx], a[i-1]);
            c = 1;
            break;
        }
    }
    if(!c) printf("-1");
    
    return 0;
}