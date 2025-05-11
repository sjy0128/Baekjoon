#include <stdio.h>
#define PI 3.141592
 
int main(void) {
    int d1, d2;
    scanf("%d\n%d", &d1, &d2);
    printf("%lf", (double)(d2*PI + d1)*2);
    return 0;
}