#include <stdio.h>

int main(void) {
    int wc, hc, ws, hs;
    scanf("%d %d %d %d", &wc, &hc, &ws, &hs);
    printf(wc - ws >= 2 && hc - hs >= 2 ? "1" : "0");
    return 0;
}