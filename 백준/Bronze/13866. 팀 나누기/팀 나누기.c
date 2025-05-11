#include <stdio.h>

int abs(int a) {return a > 0 ? a : -a;}

int main(void) {
    int sum=0, min=10000, max=0, temp;
    for(int i=0; i<4; i++) {
        scanf("%d", &temp);
        if(temp > max) max = temp;
        if(temp < min) min = temp;
        sum += temp;
    }
    printf("%d", abs(2 * max + 2 * min - sum));
    return 0;
}