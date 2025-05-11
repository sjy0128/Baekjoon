#include <stdio.h>
int main(void) {
    int x, y;
    scanf("%d\n%d", &x, &y);
    for(int i=x; i<=y; i++) {
        if((i-x)%60 == 0) printf("All positions change in year %d\n", i);
    }
}