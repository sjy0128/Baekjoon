#include <stdio.h>

char *f(char *a) {
    int s = 0, e, i;
    for(i=0; a[i]!='\0'; i++);
    e = i-1;
    while(e > s) if(a[s++] != a[e--]) return "no";
    return "yes";
}

int main(void) {
    char a[6];
    while(1) {
        scanf("%s", a);
        if(a[0]=='0') break;
        printf("%s\n", f(a));
    }
    return 0;
}