#include <stdio.h>

int main(void) {
    int temp, total, sum=0;
    scanf("%d", &total);
    for(int i=0; i<9; i++) {
        scanf("%d", &temp);
        sum += temp;
    }
    printf("%d", total-sum);
    
    return 0;
}