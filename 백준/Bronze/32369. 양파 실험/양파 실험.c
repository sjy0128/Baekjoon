#include <stdio.h>

int main(void) {
    int n, a, b, i, x=1, y=1, temp;
    scanf("%d %d %d", &n, &a, &b);
    for(i=0; i<n; i++) {
        x += a;
        y += b;
        if(y > x) {
            temp = y;
            y = x;
            x = temp;
        }
        if(y == x) y--;
    }
    printf("%d %d", x, y);
    return 0;
}