#include <stdio.h>

int main(void) {
    int h, m, s, h2, m2, s2;
    for(int i=0; i<3; i++) {
        scanf("%d %d %d %d %d %d", &h, &m, &s, &h2, &m2, &s2);
        s = s2 - s;
        if(s < 0) {
            s += 60;
            m++;
        }
        m = m2 - m;
        if(m < 0) {
            m += 60;
            h++;
        }
        h = h2 - h;
        printf("%d %d %d\n", h, m, s);
    }
    
    return 0;
}