#include <stdio.h>

int solve(int n, int k) {
    int _n = 0;
    for(int i = 1; i <= n; i++) {
        if(!(n % i)) _n++;
        if(_n == k) return i;
    }
    return 0;
}

int main(void) {
    int n, k;
    scanf("%d %d", &n, &k);
    printf("%d", solve(n, k));
    return 0;
}