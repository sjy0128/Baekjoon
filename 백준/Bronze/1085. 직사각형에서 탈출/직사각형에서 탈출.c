#include <stdio.h>

int main(void) {
    int x, y, w, h;
    scanf("%d %d %d %d", &x, &y, &w, &h);
    w -= x;
    h -= y;
    if(x <= y && x <= w && x <= h) printf("%d", x);
    else if(y <= x && y <= w && y <= h) printf("%d", y);
    else if(w <= x && w <= y && w <= h) printf("%d", w);
    else printf("%d", h);
    return 0;
}