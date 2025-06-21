#include <stdio.h>

int main() {
    int d, m, i, mm[] = {31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};
    char *dd[7] = {"Wednesday", "Thursday", "Friday", "Saturday", "Sunday", "Monday", "Tuesday"};
    scanf("%d %d", &d, &m);
    for(i=0; i<m-1; i++) d += mm[i];
    printf("%s", dd[d%7]);
    return 0;
}