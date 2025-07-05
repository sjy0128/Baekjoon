#include <stdio.h>

int main(void) {
    int n, m, i, j, k, l, b=0, w=0, r=64;
    char c[50][50], t;
    scanf("%d %d", &n, &m);
    for(i=0; i<n; i++) scanf("%s", c[i]);
    for(i=0; i<n-7; i++) {
        for(j=0; j<m-7; j++) {
            b = 0; w = 0;
            for(k=i; k<i+8; k++) {
                for(l=j; l<j+8; l++) {
                    t = (k + l) % 2 == 0 ? 'B' : 'W';
                    if(c[k][l] != t) b++;
                }
            }
            for(k=i; k<i+8; k++) {
                for(l=j; l<j+8; l++) {
                    t = (k + l) % 2 == 1 ? 'B' : 'W';
                    if(c[k][l] != t) w++;
                }
            }
            if((b < w ? b : w) < r) r = b < w ? b : w;
        }
    }
    printf("%d", r);
    return 0;
}