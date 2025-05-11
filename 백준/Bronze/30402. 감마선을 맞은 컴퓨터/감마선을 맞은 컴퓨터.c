#include <stdio.h>
int main(void) {
    char temp;
    for(int i=0; i<15*15; i++) {
        scanf("%c ", &temp);
        if(temp=='w') {
            printf("chunbae");
            break;
        }
        if(temp=='b') {
            printf("nabi");
            break;
        }
        if(temp=='g') {
            printf("yeongcheol");
            break;
        }
    }
    return 0;
}