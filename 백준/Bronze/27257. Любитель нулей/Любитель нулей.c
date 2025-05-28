#include <stdio.h>

int main(void) {
    int i, count=0, renzoku=0;
    char k[11];
    scanf("%s", k);
    for(i=0; k[i]!='\0'; i++) {
        if(k[i]=='0') {
            count++;
            renzoku++;
        } else renzoku=0;
    }
    printf("%d", count-renzoku);
    return 0;
}