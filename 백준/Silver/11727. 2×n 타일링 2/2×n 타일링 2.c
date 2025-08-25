#include <stdio.h>

int main(void) {
    int n, r[1000]={1,3,};
    scanf("%d", &n);
    for(int i=2; i<n; i++) {
        r[i] = (r[i-2]*2 + r[i-1])%10007;
    }
    printf("%d", r[n-1]);
    return 0;
}