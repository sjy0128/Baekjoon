#include <stdio.h>

int main(void) {
    int a, p;
    scanf("%d %d", &a, &p);
    printf(a*7 == p*13 ? "lika" : (a*7 > p*13 ? "Axel" : "Petra"));
    return 0;
}