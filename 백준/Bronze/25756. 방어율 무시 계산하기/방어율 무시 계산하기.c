#include <stdio.h>
int main(void) {
    int n, a;
    double v=0;
    scanf("%d", &n);
    for(int i=0; i<n; i++) {
        scanf("%d", &a);
        v = 100-(100-v)*(100-a)/100;
        printf("%lf\n", v);;
    }
}