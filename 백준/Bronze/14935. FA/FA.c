#include <stdio.h>

int main(void) {
    int x, i, temp=0, len, FA = 0;
    scanf("%d", &x);
    while(1) {
        len = 1;
        for(i=1; i<=x/10; i*=10) len++;
        x = x/i * len;
        if(temp == x) {
            FA = 1;
            break;
        }
        temp = x;
    }
    printf("%s", FA ? "FA" : "NFA");
    
    return 0;
}