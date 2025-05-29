#include <stdio.h>
int main(void) {
    int m, d;
    scanf("2023-%d-%d", &m, &d);
    printf(m < 9 || (m == 9 && d <= 16) ? "GOOD" : "TOO LATE");
    return 0;
}