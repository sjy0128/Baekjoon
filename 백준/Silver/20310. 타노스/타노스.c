#include <stdio.h>

int main(void) {
    int l, c0, c1;
    char s[501];
    scanf("%s", s);
    for(l=c0=c1=0; s[l]!='\0'; l++) {
        if(s[l] == '0') c0++;
        else c1++;
    };
    for(int i=0, c=0; c<c1/2; i++) {
        if(s[i] == '1') {
            s[i] = '\0';
            c++;
        }
    }
    for(int i=l-1, c=0; c<c0/2; i--) {
        if(s[i] == '0') {
            s[i] = '\0';
            c++;
        }
    }
    for(int i=0; i<l; i++) {
        if(s[i] != '\0') printf("%c", s[i]);
    }
    return 0;
}