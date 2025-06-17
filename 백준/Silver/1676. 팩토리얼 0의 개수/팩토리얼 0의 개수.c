#include <stdio.h>

int main(void) {
    int n, i, t, a=0, b=0;
    scanf("%d", &n);
    for(i=1; i<=n; i++) {
        t = i;
        while(t % 2 == 0) {
            t /= 2;
            a++;
        }
        while(t % 5 == 0) {
            t /= 5;
            b++;
        }
    }
    printf("%d", a < b ? a : b);
    return 0;
}