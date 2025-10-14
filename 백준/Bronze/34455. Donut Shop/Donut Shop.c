#include <stdio.h>

int main(void) {
    int d, e, q;
    char o;
    scanf("%d\n%d", &d, &e);
    while(e--) {
        scanf(" %c\n%d", &o, &q);
        if(o == '+') d += q;
        else d -= q;
    }
    printf("%d", d);
    return 0;
}