#include <stdio.h>

int main(void) {
    float x, y;
    while(1) {
        scanf("%f %f", &x, &y);
        if(x == 0 || y == 0) printf("AXIS\n");
        else printf("Q%d\n", y > 0 ? (x > 0 ? 1 : 2) : (x > 0 ? 4 : 3));
        if(x == 0 && y == 0) break;
    }
    return 0;
}