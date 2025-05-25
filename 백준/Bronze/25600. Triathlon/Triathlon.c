#include <stdio.h>

int main(void) {
    int t, a, d, g, s, i, max=0;
    scanf("%d", &t);
    for(i=0; i<t; i++) {
        scanf("%d %d %d", &a, &d, &g);
        s = a*(d + g);
        if(a == d + g) s *= 2;
        if(s > max) max = s;
    }
    printf("%d", max);
    return 0;
}