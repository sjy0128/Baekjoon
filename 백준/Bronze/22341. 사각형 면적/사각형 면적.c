#include <stdio.h>

int main(void) {
    int n, c, i, x, y, a, b;
    scanf("%d %d", &n, &c);
    a = n;
    b = n;
    for(i=0; i<c; i++) {
        scanf("%d %d", &x, &y);
        if(x < a && y < b) {
            if(a*(b-y) >= b*(a-x)) a = x;
            else b = y;
        }
    }
    printf("%d", a * b);
    return 0;
}