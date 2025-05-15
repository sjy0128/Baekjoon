#include <stdio.h>

int main() {
    int a=0, b=0, temp, i;
    for(i=3; i>0; i--) {
        scanf("%d", &temp);
        a += temp*i;
    }
    for(i=3; i>0; i--) {
        scanf("%d", &temp);
        b += temp*i;
    }
    printf(a == b ? "T" : (a > b ? "A" : "B"));
    return 0;
}