#include <stdio.h>
int main(void) {
    int i, count=0;
    char str[1001];
    scanf("%s", str);
    for(i=0; str[i+3]!='\0'; i++) {
        if(str[i]=='D' && str[i+1]=='K' && str[i+2]=='S' && str[i+3]=='H') count++;
    }
    printf("%d", count);
    return 0;
}