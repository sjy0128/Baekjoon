#include <stdio.h>

int main(void) {
    int d=0, t, i;
    for(i=0; i<10; i++) {
        scanf("%d", &t);
        d += t;
    }
    switch(d % 4) {
        case 0:
            printf("N");
            break;
        case 1:
            printf("E");
            break;
        case 2:
            printf("S");
            break;
        default:
            printf("W");
    }
    return 0;
}