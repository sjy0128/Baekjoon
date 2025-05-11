#include <stdio.h>

int main(void) {
    int l, r;
    scanf("%d %d", &l, &r);
    if(l == 0 && r == 0) printf("Not a moose");
    else printf("%s %d", l == r ? "Even" : "Odd", l > r ? l*2 : r*2);
    
    return 0;
}