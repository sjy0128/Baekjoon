#include <stdio.h>

int main(void) {
    int n;
    scanf("%d", &n);
    for(int i=n/5; i>=1; i--) {
        if((n-i*5)%3==0) {
            printf("%d", i + (n-i*5)/3);
            return 0;
        }
    }
    printf("%d", n%3==0 ? n/3 : -1);
    
    return 0;
}