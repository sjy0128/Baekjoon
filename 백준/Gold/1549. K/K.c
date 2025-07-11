#include <stdio.h>

long long abs(long long a) {return a < 0 ? -a : a;}

int main(void) {
    int n, i, j, k, mk;
    long long a[3001]={0,}, sik, sjk, mv=-1;
    scanf("%d", &n);
    for(i=1; i<=n; i++) {
        scanf("%lld", &a[i]);
        a[i] += a[i-1];
    }
    for(k=1; k<=n/2; k++) {
        for(i=k; i<=n-k; i++) {
            for(j=i+k; j<=n; j++) {
                sik = a[i] - a[i-k];
                sjk = a[j] - a[j-k];
                if(mv == -1 || abs(sik - sjk) <= mv) {
                    mv = abs(sik - sjk);
                    mk = k;
                }
            }
        }
    }
    printf("%d\n%lld", mk, mv);
    return 0;
}