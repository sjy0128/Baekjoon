#include <stdio.h>

int main() {
    int h, m, s, q, t, c, i;
    scanf("%d %d %d\n%d", &h, &m, &s, &q);
    for(i=0; i<q; i++) {
        scanf("%d", &t);
        switch(t) {
            case 1:
                scanf("%d", &c);
                s += c%(3600*24);
                break;
            case 2:
                scanf("%d", &c);
                s += 3600*24 - c%(3600*24);
                break;
            case 3:
                printf("%d %d %d\n", h, m, s);
                break;
        }
        m += s/60;
        s %= 60;
        h += m/60;
        m %= 60;
        h %= 24;
    }
    return 0;
}