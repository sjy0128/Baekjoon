#include <stdio.h>

int main(void) {
    int ai, m=100, s=0;
    for(int i=0; i<7; i++) {
        scanf("%d", &ai);
        if(ai % 2) {
            if(ai < m) m = ai;
            s += ai;
        }
    }
    if(!s) {
        printf("-1");
    } else {
        printf("%d\n%d", s, m);
    }
    return 0;
}