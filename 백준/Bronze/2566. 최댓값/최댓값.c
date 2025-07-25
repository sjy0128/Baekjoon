#include <stdio.h>

int main() {
    int i, j, t, m=0, a, b;
    for(i=1; i<10; i++) {
        for(j=1; j<10; j++) {
            scanf("%d", &t);
            if(t >= m) {
                m = t;
                a = i;
                b = j;
            }
        }
    }
    printf("%d\n%d %d", m, a, b);
    return 0;
}