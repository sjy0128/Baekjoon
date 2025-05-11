#include <stdio.h>

int main(void) {
    int num[4], i, j, temp;
    for(i=0; i<4; i++) scanf("%d", &num[i]);
    for(i=0; i<3; i++) {
        for(j=i; j<4; j++) {
            if(num[i] > num[j]) {
                temp = num[i];
                num[i] = num[j];
                num[j] = temp;
            }
        }
    }
    printf("%d", num[0] * num[2]);
    return 0;
}