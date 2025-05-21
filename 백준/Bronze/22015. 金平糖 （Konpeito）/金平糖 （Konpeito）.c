#include <stdio.h>

int main(void) {
    int i, temp, max=0, sum=0;
    for(i=0; i<3; i++) {
        scanf("%d", &temp);
        if(temp > max) max = temp;
        sum += temp;
    }
    printf("%d", max*3 - sum);
    return 0;
}