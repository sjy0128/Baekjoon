#include <stdio.h>
int main(void) {
    int t, x1, y1, r1, x2, y2, r2, i, d1, d2, d3;
    scanf("%d", &t);
    for(i=0; i<t; i++) {
        scanf("%d %d %d %d %d %d", &x1, &y1, &r1, &x2, &y2, &r2);
        d1 = (x1 - x2) * (x1 - x2) + (y1 - y2) * (y1 - y2);
        d2 = (r1 + r2) * (r1 + r2);
        d3 = (r1 - r2 < 0 ? r2 - r1 : r1 - r2);
        d3 *= d3;
        if(d1 == 0) {
            if(r1 == r2) printf("-1\n");
            else printf("0\n");
        } else if(d1 == d2) {
            printf("1\n");
        } else if(d1 > d2 || d1 < d3) {
            printf("0\n");
        } else if(d1 == d3) {
            printf("1\n");
        } else {
            printf("2\n");
        }
    }
    return 0;
}