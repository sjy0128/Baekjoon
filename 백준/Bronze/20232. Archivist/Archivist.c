#include <stdio.h>
int main(void) {
    int y;
    scanf("%d", &y);
    switch(y) {
        case 1996:
        case 1997:
        case 2000:
        case 2007:
        case 2008:
        case 2013:
        case 2018:
            printf("SPbSU");
            break;
        case 2006:
            printf("PetrSU, ");
        default:
            printf("ITMO");
    }
    return 0;
}