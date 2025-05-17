#include <stdio.h>
int main(void) {
    int a, x, b, y, t;
    scanf("%d\n%d\n%d\n%d\n%d", &a, &x, &b, &y, &t);
    printf("%d %d", t>=30 ? a+(t-30)*x*21 : a, t>=45 ? b+(t-45)*y*21 : b);
    return 0;
}