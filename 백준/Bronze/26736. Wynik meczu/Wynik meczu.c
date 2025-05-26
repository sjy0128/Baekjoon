#include <stdio.h>

int main() {
    int a=0, b=0, i;
    char str[100001];
    scanf("%s", str);
    for(i=0; str[i]!='\0'; i++) {
        if(str[i] == 'A') a++;
        else b++;
    }
    printf("%d : %d", a, b);
    return 0;
}