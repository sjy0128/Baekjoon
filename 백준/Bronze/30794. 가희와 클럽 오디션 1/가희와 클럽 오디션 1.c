#include <stdio.h>

int main() {
    int lv, m;
    char pan[8];
    scanf("%d %s", &lv, pan);
    switch(pan[0]) {
        case 'm':
            m = 0;
            break;
        case 'b':
            m = 200;
            break;
        case 'c':
            m = 400;
            break;
        case 'g':
            m = 600;
            break;
        default:
            m = 1000;
    }
    printf("%d", lv * m);
    return 0;
}