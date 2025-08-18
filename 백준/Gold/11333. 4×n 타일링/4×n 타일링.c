#include <stdio.h>

int main(void) {
    int t, n;
    long long a[3333]={3, 13,}, b[3333]={1, 5,};
    scanf("%d", &t);
    while(t--) {
        scanf("%d", &n);
        if(n % 3) printf("0\n");
        else {
            for(int i=2; i<n/3; i++) {
                a[i] = a[i-1]*4 + b[i-1];
                b[i] = a[i-2] + a[i-1] + b[i-1];
                a[i] %= 1000000007;
            }
            printf("%lld\n", a[n/3-1]);
        }
    }
    return 0;
}