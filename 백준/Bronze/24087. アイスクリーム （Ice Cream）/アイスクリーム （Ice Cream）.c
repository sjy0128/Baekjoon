#include <stdio.h>

int main(void) {
    int s, a, b;
    scanf("%d\n%d\n%d", &s, &a, &b);
    printf("%d", 250 + (s > a ? ((s-a-1)/b+1)*100 : 0));
    return 0;
}