#include <stdio.h>

int main(void) {
    int w, h, f, c, x1, y1, x2, y2, s=0;
    long long t;
    scanf("%d %d %d %d %d %d %d %d", &w, &h, &f, &c, &x1, &y1, &x2, &y2);
    t = (long long) w * h;
    f = f < w-f ? f : w-f;
    w -= f;
    for(int i=x1; i<x2; i++) s += 1 + (i < f);
    printf("%lld", t - (long long)(y2-y1) * s * (c+1));
    return 0;
}