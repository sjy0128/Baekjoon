#include <stdio.h>

int main() {
    int b=0, c=0, i;
    char str[1000001];
    scanf("%s", str);
    for(i=0; str[i]!='\0'; i++) {
        if(str[i] == 'B') b++;
        else c++;
    }
    printf("%d", b/2 + c/2);
    return 0;
}