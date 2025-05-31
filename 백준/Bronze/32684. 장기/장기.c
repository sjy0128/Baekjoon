#include <stdio.h>

int main(void) {
    int s[6]={13, 7, 5, 3, 3, 2}, c=0, h=0, i, g;
    for(i=0; i<6; i++) {
        scanf("%d", &g);
        c += g*s[i];
    }
    for(i=0; i<6; i++) {
        scanf("%d", &g);
        h += g*s[i];
    }
    printf(c > h+1 ? "cocjr0208" : "ekwoo");
    return 0;
}