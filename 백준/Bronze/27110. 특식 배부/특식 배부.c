#include <stdio.h>
int main(void) {
    int n, a, b, c;
    scanf("%d\n%d %d %d", &n, &a, &b, &c);
    printf("%d", (a>n ? n:a) + (b>n ? n:b) + (c>n ? n:c));
    return 0;
}