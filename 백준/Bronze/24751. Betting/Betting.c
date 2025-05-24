#include <stdio.h>

int main(void) {
    int a;
    scanf("%d", &a);
    printf("%lf\n%lf", (double)100/a, (double)100/(100-a));
    return 0;
}