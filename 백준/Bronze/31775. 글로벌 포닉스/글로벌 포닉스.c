#include <stdio.h>

int main(void) {
    int i, l=0, k=0, p=0;
    char s[3][21];
    for(i=0; i<3; i++) {
        scanf("%s", s[i]);
        switch(s[i][0]) {
            case 'l':
                l=1;
                break;
            case 'k':
                k=1;
                break;
            case 'p':
                p=1;
                break;
        }
    }
    printf(l && k && p ? "GLOBAL" : "PONIX");
    return 0;
}