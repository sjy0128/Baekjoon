#include <stdio.h>

int main() {
    int a=0, b=0, i;
    char s[1000000], t;
    scanf("%s", s);
    for(i=0; s[i]!='\0'; i++) {
        if(i == 0 || s[i] != t) {
            if(s[i] == '0') {
                a++;
                t = '0';
            } else {
                b++;
                t = '1';
            }
        }
    }
    printf("%d", a < b ? a : b);
    return 0;
}