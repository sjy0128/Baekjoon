#include <stdio.h>

int main(void) {
    int h, l, a, b;
    scanf("%d %d %d %d", &h, &l, &a, &b);
    if((a < b ? a : b) > l) printf("NO");
    else if(a > l && a > h*2) printf("NO");
    else if(b > l && b > h*2) printf("NO");
    else if((a < b ? a : b) > h*2) printf("NO");
    else printf("YES");
    return 0;
}