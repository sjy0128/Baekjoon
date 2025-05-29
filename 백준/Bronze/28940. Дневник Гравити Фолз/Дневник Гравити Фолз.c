#include <stdio.h>

int main(void) {
    int w, h, n, m, a, b;
    scanf("%d %d\n%d %d %d", &w, &h, &n, &a, &b);
    if(w < a || h < b) printf("-1");
    else {
        m = (w/a)*(h/b);
        printf("%d", n%m == 0 ? n/m : n/m+1);
    }
    return 0;
}