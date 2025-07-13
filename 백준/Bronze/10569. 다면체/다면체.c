#include <stdio.h>

int main(void) {
    int t, i, v, e;
    scanf("%d", &t);
    for(i=0; i<t; i++) {
        scanf("%d %d", &v, &e);
        printf("%d\n", e-v+2);
    }
    return 0;
}