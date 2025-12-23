#include <stdio.h>
#define MAX 100001

int main(void) {
    int n, k, arr[MAX] = {0,}, prime[MAX] = {0,}, cnt = 0;
    scanf("%d\n%d", &n, &k);
    for(int i = 2; i <= n; i++) {
        if(prime[i]) continue;
        for(int j = i; j <= n; j += i) {
            prime[j] = 1;
            if(i > k) arr[j] = 1;
        }
    }
    for(int i = 1; i <= n; i++) cnt += !arr[i];
    printf("%d", cnt);
    return 0;
}