#include <stdio.h>

int main() {
    int i, a, b;
    char o[333335];
    scanf("%s", o);
    for(i=0; o[i]!='\0'; i++) {
        a = o[i]-'\0';
        b = ((a>>2)&1)*100 + ((a>>1)&1)*10 + (a%2&1)*1;
        if(i == 0) printf("%d", b);
        else printf("%03d", b);
    }
    return 0;
}