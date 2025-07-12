#include <stdio.h>

int main(void) {
    int c[3]={1,}, m, i, x, y, t;
    scanf("%d", &m);
    for(i=0; i<m; i++) {
        scanf("%d %d", &x, &y);
        t = c[x-1];
        c[x-1] = c[y-1];
        c[y-1] = t;
    }
    for(i=0; i<3; i++) {
        if(c[i] == 1) {
            printf("%d", i+1);
            return 0;
        }
    }
    return 0;
}