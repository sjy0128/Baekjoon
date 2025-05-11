#include <stdio.h>

int main(void) {
    int p[4], x, y, r, i, c = 0;
    for(i=0; i<4; i++) scanf("%d", &p[i]);
    scanf("%d %d %d", &x, &y, &r);
    for(i=0; i<4; i++) {
        if(p[i] == x) {
            printf("%d", i+1);
            c = 1;
            break;
        }
    }
    if(c == 0) printf("0");
    return 0;
}