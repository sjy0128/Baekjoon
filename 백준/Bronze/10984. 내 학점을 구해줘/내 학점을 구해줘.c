#include <stdio.h>

int main(void) {
    int t, n, c, s;
    float g, gps;
    scanf("%d", &t);
    while(t--) {
        scanf("%d", &n);
        gps = s = 0;
        for(int i=0; i<n; i++) {
            scanf("%d %f", &c, &g);
            s += c;
            gps += g*c;
        }
        printf("%d %.1f\n", s, gps/s);
    }
    return 0;
}