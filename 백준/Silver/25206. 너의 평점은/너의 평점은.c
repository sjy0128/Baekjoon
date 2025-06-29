#include <stdio.h>

int main(void) {
    int i;
    float a, ss, s1=0, s2=0;
    char sn[51], g[3];
    for(i=0; i<20; i++) {
        scanf("%s %f %s", sn, &a, g);
        if(g[0] == 'P') continue;
        s1 += a;
        ss = 0;
        if(g[0] <= 'D') ss += 'E' - g[0];
        if(g[1] == '+') ss += 0.5;
        s2 += a * ss;
    }
    printf("%f", s2 / s1);
    return 0;
}