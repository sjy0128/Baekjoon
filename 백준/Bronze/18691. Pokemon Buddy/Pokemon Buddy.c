#include <stdio.h>

int main() {
    int t, g, c, e, i;
    scanf("%d", &t);
    for(i=0; i<t; i++) {
        scanf("%d %d %d", &g, &c, &e);
        printf("%d\n", c >= e ? 0 : (e-c)*(g*2-1));
    }
    return 0;
}