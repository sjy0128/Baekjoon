#include <stdio.h>

int main(void) {
    int s[5001]={0,}, i, c=0, al, bl;
    char a[5001], b[5001];
    scanf("%s\n%s", a, b);
    for(al=0; a[al]!='\0'; al++);
    for(bl=0; b[bl]!='\0'; bl++);
    for(i=0; i<al; i++) s[i] += a[al-i-1]-'0';
    for(i=0; i<bl; i++) s[i] += b[bl-i-1]-'0';
    for(i=0; i<(al>bl?al:bl); i++) {
        c = i;
        if(s[i] >= 10) {
            s[i] -= 10;
            s[i+1] += 1;
            c = i+1;
        }
    }
    for(i=c; i>=0; i--) {
        printf("%d", s[i]);
    }
    return 0;
}