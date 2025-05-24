#include <stdio.h>

int main(void) {
    int vk, jk, vl, yl, vh, dh, jh;
    scanf("%d %d\n%d %d\n%d %d %d", &vk, &jk, &vl, &yl, &vh, &dh, &jh);
    printf("%lld", (long long)(vk*jk + vl*yl) * vh*dh*jh);
    return 0;
}