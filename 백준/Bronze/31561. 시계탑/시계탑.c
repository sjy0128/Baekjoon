#include <stdio.h>

int main(void) {
    int m, i;
    float r;
    scanf("%d", &m);
    printf("%.1f", m <= 30 ? (float)m/2 : 15 + ((float)m-30)*1.5);
    return 0;
}