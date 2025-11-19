#include <stdio.h>

int main(void) {
    int n, b, c, a, i, r=0;
    scanf("%d", &n);
    while(n--) {
        scanf("%d %d %d %d", &b, &c, &a, &i);
        if(b >= 1000 || c >= 1600 || a >= 1500 || (i != -1 && i <= 30)) r++;
    }
    printf("%d", r);
    return 0;
}