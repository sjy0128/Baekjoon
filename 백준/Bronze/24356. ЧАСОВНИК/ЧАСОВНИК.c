#include <stdio.h>

int main(void) {
    int t1, m1, t2, m2, m;
    scanf("%d %d %d %d", &t1, &m1, &t2, &m2);
    m = (t2 - t1)*60 + m2 - m1;
    if(m < 0) m += 24*60;
    printf("%d %d", m, m/30);
    return 0;
}