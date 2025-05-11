#include <stdio.h>

int main() {
    int h, m;
    scanf("%d %d", &h, &m);
    printf("%d %d", m>=45 ? h:(h==0 ? 23:h-1), (m+15)%60);
    return 0;
}