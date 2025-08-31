#include <stdio.h>

int rev(int a);

int main(void) {
    int x, y;
    scanf("%d %d", &x, &y);
    printf("%d", rev(rev(x)+rev(y)));
    return 0;
}

int rev(int a) {
    int r=0;
    while(a) {
        r = r*10 + a%10;
        a /= 10;
    }
    return r;
}