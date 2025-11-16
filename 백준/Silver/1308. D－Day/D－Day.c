#include <stdio.h>

int isLeapYear(int y);
int getDaySum(int y, int m, int d);

int main(void) {
    int y1, m1, d1, y2, m2, d2, r = 0;
    scanf("%d %d %d\n%d %d %d", &y1, &m1, &d1, &y2, &m2, &d2);
    if((y1 + 1000 < y2) ||
    (y1 + 1000 == y2 && m1 < m2) ||
    (y1 + 1000 == y2 && m1 == m2 && d1 <= d2)) {
        printf("gg");
        return 0;
    }
    for(int i=y1; i<y2; i++) r += 365 + isLeapYear(i);
    r -= getDaySum(y1, m1, d1);
    r += getDaySum(y2, m2, d2);
    printf("D-%d", r);
    return 0;
}

int isLeapYear(int y) {
    return !(y % 400) || (!(y % 4) && y % 100);
}

int getDaySum(int y, int m, int d) {
    int md[] = {31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31}, r = d;
    for(int i=0; i<m-1; i++) {
        if(i == 1) r += md[1] + isLeapYear(y);
        else r += md[i];
    }
    return r;
}