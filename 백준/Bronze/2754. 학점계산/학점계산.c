#include <stdio.h>

int main(void) {
    char a, p;
    scanf("%c%c", &a, &p);
    printf("%d.%d", a!='F'?'D'-a+(p!='-'?1:0):0, p=='+'?3:(p=='-'?7:0));
    return 0;
}