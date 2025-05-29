#include <stdio.h>
int main(void) {
    int temp, i, min=500, sum=0;
    for(i=0; i<4; i++) {
        scanf("%d", &temp);
        sum += temp;
        if(temp < min) min = temp;
    }
    printf("%d", sum - min + 1);
    return 0;
}