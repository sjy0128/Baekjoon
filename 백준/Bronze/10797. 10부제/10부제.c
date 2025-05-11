#include <stdio.h>

int main(void) {
    int a, temp, count=0;
    scanf("%d", &a);
    for(int i=0; i<5; i++) {
        scanf("%d", &temp);
        if(temp == a) count ++;
    }
    printf("%d", count);
    return 0;
}