#include <stdio.h>

int main() {
    int d, y, h, m, mo, t=0, i, md[] = {31,28,31,30,31,30,31,31,30,31,30,31};
    char mon[10];
    scanf("%s %d, %d %d:%d", mon, &d, &y, &h, &m);
    switch(mon[0]) {
        case 'J':
            mo = mon[2] == 'n' ? (mon[1] == 'a' ? 1 : 6) : 7;
            break;
        case 'F':
            mo = 2;
            break;
        case 'M':
            mo = mon[2] == 'r' ? 3 : 5;
            break;
        case 'A':
            mo = mon[1] == 'p' ? 4 : 8;
            break;
        case 'S':
            mo = 9;
            break;
        case 'O':
            mo = 10;
            break;
        case 'N':
            mo = 11;
            break;
        case 'D':
            mo = 12;
            break;
    }
    for(i=1; i<mo; i++) {
        d += md[i-1];
    }
    if(((y%4==0 && y%100!=0)||y%400==0) && mo>=3) d++;
    d--;
    h += d*24;
    m += h*60;
    printf("%.15Lf", (long double)100/(((y%4==0 && y%100!=0)||y%400==0 ? 366 : 365)*24*60)*m);
    return 0;
}