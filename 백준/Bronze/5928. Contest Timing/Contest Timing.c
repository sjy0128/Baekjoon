#include <stdio.h>

int main(void) {
    int d, h, m, total;
    scanf("%d %d %d", &d, &h, &m);
    d -= 11;
    h -= 11;
    m -= 11;
    total = d*24*60 + h*60 + m;
    printf("%d", total >= 0 ? total : -1);
    
    return 0;
}