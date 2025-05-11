#include <stdio.h>

int main(void) {
    int x, sum=64, min=64, count=1;
    scanf("%d", &x);
    while(sum > x) {
        min /= 2;
        count++;
        if(sum - min >= x) {
            sum -= min;
            count--;
        }
    }
    printf("%d", count);
    
    return 0;
}