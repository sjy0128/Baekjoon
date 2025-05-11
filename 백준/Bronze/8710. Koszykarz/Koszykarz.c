#include <stdio.h>

int main(void) {
    int a, b, c;
    scanf("%d %d %d", &a, &b, &c);
    printf("%d", (b-a)%c==0 ? (b-a)/c : (b-a)/c+1);
    return 0;
}