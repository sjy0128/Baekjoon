#include <stdio.h>
#define _USE_MATH_DEFINES
#include <math.h>

int main() {
    int r;
    scanf("%d", &r);
    printf("%lf\n%lf", r*r*M_PI, (double)r*r*2);
    return 0;
}