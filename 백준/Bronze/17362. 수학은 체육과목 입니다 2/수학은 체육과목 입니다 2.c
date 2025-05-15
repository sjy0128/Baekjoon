#include <stdio.h>

int main() {
    int n, i, f=2, d=2;
    scanf("%d", &n);
    n %= 8;
    for(i=0; i<n; i++) {
        if(d == 1) f++;
        else f--;
        if(f == 5 && d == 1) d = 2;
        if(f == 1 && d == 2) d = 1;
    }
    printf("%d", f);
    return 0;
}