#include <stdio.h>

int main(void) {
    int h1, b1, h2, b2, p1, p2;
    scanf("%d %d\n%d %d", &h1, &b1, &h2, &b2);
    p1 = h1*3 + b1;
    p2 = h2*3 + b2;
    if(p1 == p2) printf("NO SCORE");
    else printf("%d %d", p1 > p2 ? 1 : 2, p1 > p2 ? p1 - p2 : p2 - p1);
    return 0;
} 