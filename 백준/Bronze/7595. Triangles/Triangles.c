#include <stdio.h>

int main(void) {
    int size, i, j;
    while(1) {
        scanf("%d", &size);
        if(size == 0) break;
        for(i=1; i<=size; i++) {
            for(j=0; j<i; j++) {
                printf("*");
            }
            printf("\n");
        }
    }
    return 0;
}