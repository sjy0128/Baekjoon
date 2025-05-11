#include <stdio.h>

int main(void) {
    int y, m;
    scanf("%d\n%d", &y, &m);
    printf("%d", m + (m - y));
    return 0;
}