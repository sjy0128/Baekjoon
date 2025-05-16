#include <stdio.h>
int main(void) {
    int n, w, h, l;
    scanf("%d %d %d %d", &n, &w, &h, &l);
    printf("%d", (w/l) * (h/l) >= n ? n : (w/l) * (h/l));
    return 0;
}