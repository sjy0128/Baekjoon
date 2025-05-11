#include <stdio.h>

int main(void) {
    int sum=0, min=100, Sum=0, temp;
    for(int i=0; i<4; i++) {
        scanf("%d", &temp);
        if(temp < min) min = temp;
        sum += temp;
    }
    Sum += sum - min;
    min = 100;
    sum = 0;
    for(int i=0; i<2; i++) {
        scanf("%d", &temp);
        if(temp < min) min = temp;
        sum += temp;
    }
    Sum += sum - min;
    printf("%d", Sum);
    return 0;
}