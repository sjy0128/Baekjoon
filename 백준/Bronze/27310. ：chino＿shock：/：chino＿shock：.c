#include <stdio.h>

int main(void) {
    int n=0, u=0, i;
    char emoji[33];
    scanf("%s", emoji);
    for(i=0; emoji[i]!='\0'; i++) {
        n++;
        if(emoji[i] == '_') u++;
    }
    printf("%d", n + 2 + u * 5);
    return 0;
}