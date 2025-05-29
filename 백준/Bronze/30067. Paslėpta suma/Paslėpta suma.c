#include <stdio.h>
int main(void) {
    int i, temp, sum=0;
    for(i=0; i<10; i++) {
        scanf("%d", &temp);
        sum += temp;
    }
    printf("%d", sum/2);
    return 0;
}