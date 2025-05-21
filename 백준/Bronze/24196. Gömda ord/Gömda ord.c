#include <stdio.h>

int main(void) {
    int i=0;
    char str[51];
    scanf("%s", str);
    while(1) {
        printf("%c", str[i]);
        if(str[i+1]=='\0') break;
        i += str[i] - 'A' + 1;
    }
    return 0;
}