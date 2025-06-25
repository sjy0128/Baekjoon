#include <stdio.h>

int abs(int a) {return a > 0 ? a : -a;}

int main(void) {
    int w, h, x, y, p, r, i, px, py, dd, count=0;
    scanf("%d %d %d %d %d", &w, &h, &x, &y, &p);
    r = h/2;
    for(i=0; i<p; i++) {
        scanf("%d %d", &px, &py);
        if(px >= x && px <= x+w && py >= y && py <= y+h) {
            count++;
            continue;
        }
        dd = (abs(py-y-r))*(abs(py-y-r));
        if(px < x) {
            dd += (x-px)*(x-px);
        } else {
            dd += (px-x-w)*(px-x-w);
        }
        if(r*r >= dd) count++;
    }
    printf("%d", count);
    return 0;
}