#include <stdio.h>

int main(void) {
    int s, ma, f, mb;
    scanf("%d\n%d %d %d", &s, &ma, &f, &mb);
    printf(s <= 240 || s <= ma + f + mb ? "high speed rail" : "flight");
    return 0;
}