#include <stdio.h>

int main(void) {
    int s[10]={0,}, temp, i;
    for(i=0; i<5; i++) {
        scanf("%d", &temp);
        s[temp]++;
    }
    for(i=0; i<10; i++) {
        if(s[i]%2!=0) {
            printf("%d", i);
            break;
        }
    }
    return 0;
}