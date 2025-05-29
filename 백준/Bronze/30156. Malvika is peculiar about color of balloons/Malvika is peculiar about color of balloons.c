#include <stdio.h>
int main(void) {
    int t, i, j, a, b;
    char s[101];
    scanf("%d", &t);
    for(i=0; i<t; i++) {
        scanf("%s", s);
        a = 0;
        b = 0;
        for(j=0; s[j]!='\0'; j++) {
            if(s[j] == 'a') a++;
            else b++;
        }
        printf("%d\n", a < b ? a : b);
    }
    return 0;
}