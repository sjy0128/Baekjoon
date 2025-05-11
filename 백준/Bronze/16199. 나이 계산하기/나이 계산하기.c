#include <stdio.h>

int main(void) {
    int y1, m1, d1, y2, m2, d2;
    scanf("%d %d %d\n%d %d %d", &y1, &m1, &d1, &y2, &m2, &d2);
    printf("%d\n%d\n%d", y2-y1-(m1 > m2 || (m1 == m2 && d1 > d2) ? 1 : 0), y2-y1+1, y2-y1);
    return 0;
}