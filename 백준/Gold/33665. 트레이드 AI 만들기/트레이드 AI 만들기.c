#include <stdio.h>

int w[10][4], cash_1, cash_2, a, b, property_1, property_2;
char city[41], pawn[41];

void calculateProperty(void);
int getDiff(void);

int main(void) {
    int t_cash_1, t_cash_2, diff, t_diff;
    char t_city[41];
    for(int i = 0; i < 10; i++) {
        for(int j = 0; j < 4; j++) scanf("%d", &w[i][j]);
    }
    scanf("%s\n%s\n%s", city, t_city, pawn);
    scanf("%d\n%d\n%d\n%d\n%d\n%d", &cash_1, &cash_2, &t_cash_1, &t_cash_2, &a, &b);
    calculateProperty();
    diff = getDiff();
    for(int i = 0; i < 40; i++) {
        if(t_city[i] != '0') city[i] = t_city[i];
    }
    cash_1 += t_cash_2;
    cash_2 -= t_cash_2;
    cash_2 += t_cash_1;
    cash_1 -= t_cash_1;
    calculateProperty();
    t_diff = getDiff();
    printf(diff <= t_diff ? "YES" : "NO");
    return 0;
}

void calculateProperty(void) {
    int cnt_1, cnt_2;
    property_1 = cash_1 * a / 100;
    property_2 = cash_2 * a / 100;
    for(int i = 0; i < 10; i++) {
        cnt_1 = cnt_2 = 0;
        for(int j = 0; j < 4; j++) {
            if(city[i * 4 + j] == '1') {
                cnt_1++;
                if(pawn[i * 4 + j] == '1') property_1 -= b;
            }
            if(city[i * 4 + j] == '2') {
                cnt_2++;
                if(pawn[i * 4 + j] == '1') property_2 -= b;
            }
        }
        if(cnt_1) property_1 += w[i][cnt_1 - 1];
        if(cnt_2) property_2 += w[i][cnt_2 - 1];
    }
}

int getDiff(void) {
    return property_1 - property_2;
}