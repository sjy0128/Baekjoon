#include <stdio.h>

int main(void) {
    int n, i, j, sum;
    while(1) {
        scanf("%d", &n);
        if(n == 0) break;
        sum = 0;
        for(i=0, j=n; j>0; i++, j/=10) {
            switch(j%10) {
                case 1:
                    sum += 2;
                    break;
                case 2:
                    sum += 3;
                    break;
                case 0:
                    sum += 4;
                    break;
                default:
                    sum += 3;
            }
        }
        printf("%d\n", sum+i+1);
    }
    return 0;
}