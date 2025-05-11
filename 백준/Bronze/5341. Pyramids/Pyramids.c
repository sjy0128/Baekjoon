#include <stdio.h>
int main(void) {
    int temp, sum;
    while(1) {
        scanf("%d", &temp);
        if(temp==0) break;
        sum = 0;
        for(int i=1; i<=temp; i++) {
            sum += i;
        }
        printf("%d\n", sum);
    }
}