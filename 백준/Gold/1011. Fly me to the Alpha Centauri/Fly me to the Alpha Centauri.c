#include <stdio.h>
int f(unsigned int n);
int main(void) {
    int t, x, y;
    scanf("%d", &t);
    while(t--) {
        scanf("%d %d", &x, &y);
        printf("%d\n", f(y-x));
    }
    return 0;
}
int f(unsigned int n) {
    int a = 1, r = 0;
    long long sum = 0;
    while(1) {
        if(sum + a * 2 <= n) {
            sum += a * 2;
            a++;
            r += 2;
        } else if(sum + a < n) {
            sum += a;
            a++;
            r++;
        } else break;
    }
    return r + (sum != n);
}