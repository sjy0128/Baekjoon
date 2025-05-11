#include <stdio.h>
int main(void) {
    int i, temp, sum=0, min=100;
    for(i=0; i<3; i++) {
        scanf("%d", &temp);
        if(temp < min) min = temp;
        sum += temp;
    }
    printf("%d", sum-min);
    return 0;
}