#include <stdio.h>

int main(void) {
    int i, yn=1;
    char s[5001], temp, temp2;
    scanf("%s", s);
    for(i=0; s[i]!='\0'; i++) {
        switch(s[i]) {
            case 'p':
                if(s[++i] != 'i') yn = 0;
                break;
            case 'k':
                if(s[++i] != 'a') yn = 0;
                break;
            case 'c':
                if(s[++i] != 'h' || s[++i] != 'u') yn = 0;
                break;
            default:
                yn = 0;
                break;
        }
        if(!yn) break;
    }
    printf(yn ? "YES" : "NO");
    return 0;
}