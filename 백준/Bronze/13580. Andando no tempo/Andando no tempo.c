#include <stdio.h>

int main(void) {
    int a, b, c;
    scanf("%d %d %d", &a, &b, &c);
    printf("%c", (a==b || b==c || c==a) || (a+b==c || b+c==a || c+a==b) ? 'S' : 'N');
    return 0;
}