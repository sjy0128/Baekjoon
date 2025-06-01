#include <stdio.h>
int main(void) {
    int i, j=0;
    char s[5], uapc[5] = "UAPC";
    scanf("%s", s);
    for(i=0; i<4; i++) {
        if(s[j] != uapc[i]) printf("%c", uapc[i]);
        else j++;
    }
    return 0;
}