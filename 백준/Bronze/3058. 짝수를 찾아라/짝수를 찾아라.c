#include <stdio.h>

int main(void) {
    int t, d, sum, min;
    scanf("%d", &t);
    while(t--) {
        sum = 0;
        min = 100;
        for(int i = 0; i < 7; i++) {
            scanf("%d", &d);
            if(!(d % 2)) {
                sum += d;
                if(d < min) min = d;
            }
        }
        printf("%d %d\n", sum, min);
    }
    return 0;
}