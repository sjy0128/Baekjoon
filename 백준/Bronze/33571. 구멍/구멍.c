#include <stdio.h>
int main(void) {
    int i, h=0;
    char s[1001];
    fgets(s, 1001, stdin);
    for(i=0; s[i]!='\0'; i++) {
        switch(s[i]) {
            case 'A':
            case 'a':
            case 'b':
            case 'D':
            case 'd':
            case 'e':
            case 'g':
            case 'O':
            case 'o':
            case 'P':
            case 'p':
            case 'Q':
            case 'q':
            case 'R':
            case '@':
                h += 1;
                break;
            case 'B':
                h += 2;
                break;
        }
    }
    printf("%d", h);
    return 0;
}