#include <stdio.h>

int f(int n);

int main(void) {
    int x, y;
    scanf("%d %d", &x, &y);
    printf("%d", f(y - x));
    return 0;
}

int f(int n) {
    int d = 0, c = 1;
    while(n >= c * 2) {
        d += 2;
        n -= c * 2;
        c++;
    }
    if(n) d += 2 - (n <= c);
    return d;
}