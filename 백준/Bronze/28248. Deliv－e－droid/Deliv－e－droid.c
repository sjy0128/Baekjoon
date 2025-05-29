#include <stdio.h>

int main(void) {
    int p, c;
    scanf("%d\n%d", &p, &c);
    printf("%d", p*50-c*10 + (p > c ? 500 : 0));
    return 0;
}