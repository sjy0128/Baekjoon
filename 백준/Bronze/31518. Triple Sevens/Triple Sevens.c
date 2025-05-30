#include <stdio.h>

int main() {
    int n, i, j, temp, good;
    scanf("%d", &n);
    for(i=0; i<3; i++) {
        good = 0;
        for(j=0; j<n; j++) {
            scanf("%d", &temp);
            if(temp == 7) {
                good = 1;
            }
        }
        if(!good) {
            printf("0");
            return 0;
        }
    }
    printf("777");
    return 0;
}