#include <stdio.h>

int main(void) {
    int n, k, a[10], c=0;
    scanf("%d %d", &n, &k);
    for(int i=0; i<n; i++) scanf("%d", &a[i]);
    for(int i=n-1; i>=0 && k; i--) {
        while(k >= a[i]) {
            k -= a[i];
            c++;
        }
    }
    printf("%d", c);
    return 0;
}