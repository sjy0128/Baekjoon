#include <stdio.h>
#define MIN -1000000000
#define MAX 1000000000

int main(void) {
    int n, x, y, maxy = MIN, miny = MAX;
    scanf("%d", &n);
    while(n--) {
        scanf("%d %d", &x, &y);
        if(y > maxy) maxy = y;
        if(y < miny) miny = y;
    }
    printf("%d", maxy - miny);
    return 0;
}