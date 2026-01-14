#include <stdio.h>

int main(void) {
    int a, b;
    while(1) {
        scanf("%d %d", &a, &b);
        if(!a && !b) break;
        if(a < b && !(b % a)) printf("factor\n");
        else if(a > b && !(a % b)) printf("multiple\n");
        else printf("neither\n");
    }
    return 0;
}