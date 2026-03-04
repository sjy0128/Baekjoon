#include <stdio.h>

int main(void) {
    int n, year;
    char name[16];
    scanf("%d", &n);
    while(n--) {
        scanf("%s %d", name, &year);
        if(year == 2026) {
            printf("%s", name);
            break;
        }
    }
    return 0;
}