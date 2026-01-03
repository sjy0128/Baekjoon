#include <stdio.h>

int main(void) {
    int x, n, r, c = 0;
    scanf("%d\n%d", &x, &n);
    while(x < n) {
        r = x % 3;
        if(!r) x += 1;
        else x *= (r + 1);
        c++;
    }
    printf("%d", c);
    return 0;
}