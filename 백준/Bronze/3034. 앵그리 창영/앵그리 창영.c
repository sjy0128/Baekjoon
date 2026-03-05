#include <stdio.h>

int main(void) {
    int n, w, h, l;
    scanf("%d %d %d", &n, &w, &h);
    while(n--) {
        scanf("%d", &l);
        printf(l*l <= w*w + h*h ? "DA\n" : "NE\n");
    }
    return 0;
}