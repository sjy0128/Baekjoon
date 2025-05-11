#include <stdio.h>

int main(void) {
    int t, a, b, sum;
    scanf("%d", &t);
    for(int i=0; i<t; i++) {
        scanf("%d %d", &a, &b);
        sum = a;
        for(int j=0; j<b-1; j++) {
            sum *= a;
            if(sum >= 10) sum %= 10;
        }
        printf("%d\n", sum % 10 == 0 ? 10 : sum % 10);
    }
    return 0;
}