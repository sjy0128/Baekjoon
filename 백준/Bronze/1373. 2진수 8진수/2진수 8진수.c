#include <stdio.h>

int main(void) {
    int i=0, l;
    char b[1000001];
    scanf("%s", b);
    for(i=0; b[i]!='\0'; i++);
    l = i;
    if(l % 3 == 1) printf("%c", b[0]);
    if(l % 3 == 2) printf("%d", (b[0]-'0')*2 + b[1]-'0');
    for(i=l%3; i<l; i+=3) printf("%d", (b[i]-'0')*4 + (b[i+1]-'0')*2 + b[i+2]-'0');
    return 0;
}