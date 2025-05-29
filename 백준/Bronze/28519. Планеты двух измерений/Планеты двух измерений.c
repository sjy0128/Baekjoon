#include <stdio.h>

int main(void) {
    int x, y;
    scanf("%d %d", &x, &y);
    if(x - y <= 1 && x - y >= -1) {
        printf("%d", x + y);
    } else {
        printf("%d", (x < y ? x : y)*2+1);
    }
    return 0;
}