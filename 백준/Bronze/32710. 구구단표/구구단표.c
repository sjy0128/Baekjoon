#include <stdio.h>

int main(void) {
    int n, i, a=0;
    scanf("%d", &n);
    if(n <= 9) printf("1");
    else if(n > 81) printf("0");
    else {
        for(i=2; i<=9; i++) {
            if(n % i == 0 && n / i <= 9) {
                a = 1;
                break;
            }
        }
        if(a) printf("1");
        else printf("0");
    }
    return 0;
}