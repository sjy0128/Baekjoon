#include <stdio.h>

int main() {
    int x, y, z, x2, y2, z2;
    scanf("%d %d %d\n%d %d %d", &x, &y, &z, &x2, &y2, &z2);
    if(z2 >= z) {
        if(y2 >= y) {
            if(x2 >= x) {
                printf("A");
            } else {
                if(x2 >= (x%2 == 0 ? x/2 : x/2+1)) printf("B");
                else printf("C");
            }
        } else {
            if(y2 >= (y%2 == 0 ? y/2 : y/2+1)) printf("D");
            else printf("E");
        }
    }
    return 0;
}