#include <stdio.h>
int main(void) {
    int x, y, a=0;
    scanf("%d %d", &x, &y);
    switch(x) {
        case 12:
            a += 30;
        case 11:
            a += 31;
        case 10:
            a += 30;
        case 9:
            a += 31;
        case 8:
            a += 31;
        case 7:
            a += 30;
        case 6:
            a += 31;
        case 5:
            a += 30;
        case 4:
            a += 31;
        case 3:
            a += 28;
        case 2:
            a += 31;
    }
    switch((a + y) % 7) {
        case 1:
            printf("MON");
            break;
        case 2:
            printf("TUE");
            break;
        case 3:
            printf("WED");
            break;
        case 4:
            printf("THU");
            break;
        case 5:
            printf("FRI");
            break;
        case 6:
            printf("SAT");
            break;
        default:
            printf("SUN");
    }
    return 0;
}