#include <stdio.h>

int main(void) {
    int n, i, a=0, b=1, t;
    scanf("%d", &n);
    for(i=0; i<n; i++) {
        t = a;
        a = b;
        b += t;
        if(b >= 10007) b %= 10007;
    }
    printf("%d", b);
    return 0;
}