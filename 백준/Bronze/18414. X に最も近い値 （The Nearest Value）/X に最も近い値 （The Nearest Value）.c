#include <stdio.h>
int main(void) {
    int x, l, r;
    scanf("%d %d %d", &x, &l, &r);
    printf("%d", x >= l && x <= r ? x : (x < l ? l : r));
    return 0;
}