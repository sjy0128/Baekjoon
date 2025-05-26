#include <stdio.h>

int main(void) {
    int n, i;
    double a, b;
    scanf("%d", &n);
    for(i=0; i<n; i++) {
        scanf("%lf %lf", &a, &b);
        printf("%.1lf\n", b>a ? -(a-b) : a-b);
    }
    return 0;
}