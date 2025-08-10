#include <stdio.h>

int main(void) {
    int n, i, j, a[100], b[100], s=0;
    scanf("%d", &n);
    for(i=0; i<n; i++) scanf("%d", &a[i]);
    for(i=0; i<n; i++) scanf("%d", &b[i]);
    for(i=0; i<n-1; i++) {
        for(j=i+1; j<n; j++) {
            if(a[i]>a[j]) a[i] ^= a[j] ^= a[i] ^= a[j];
            if(b[i]<b[j]) b[i] ^= b[j] ^= b[i] ^= b[j];
        }
    }
    for(i=0; i<n; i++) s += a[i] * b[i];
    printf("%d", s);
    return 0;
}