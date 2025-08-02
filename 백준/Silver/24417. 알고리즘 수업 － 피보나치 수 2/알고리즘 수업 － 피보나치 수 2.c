#include <stdio.h>

int main(void) {
    int n, i, a=0, b=1, t;
    scanf("%d", &n);
    for(i=0; i<n; i++) {
        t = a;
        a = b;
        b += t;
        if(b >= 1000000007) b %= 1000000007;
    }
    printf("%d %d", a, n-2);
    return 0;
}