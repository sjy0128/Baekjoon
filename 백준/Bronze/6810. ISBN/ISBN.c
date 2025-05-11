#include <stdio.h>

int main(void) {
    int temp, sum=9*1 + 7*3 + 8*1 + 0*3 + 9*1 + 2*3 + 1*1 + 4*3 + 1*1 + 8*3;
    scanf("%d", &temp);
    sum += temp;
    scanf("%d", &temp);
    sum += temp * 3;
    scanf("%d", &temp);
    sum += temp;
    printf("The 1-3-sum is %d", sum);
    
    return 0;
}