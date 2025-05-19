#include <stdio.h>
int main(void) {
    int k, d1, d2;
    float h;
    scanf("%d\n%d %d", &k, &d1, &d2);
    h = k*k - (((float)(d1-d2)/2)*((float)(d1-d2)/2));
    printf("%f", h);
    return 0;
}