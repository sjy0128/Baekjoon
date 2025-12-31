#include <stdio.h>
#define MAX 23

int cv(char c);

int main(void) {
    int v, ac;
    char pw[MAX];
    while(1) {
        v = 0, ac = 1;
        scanf("%s", pw);
        if(pw[0] == 'e' && pw[1] == 'n' && pw[2] == 'd') break;
        for(int i = 0; pw[i] != '\0'; i++) {
            if(cv(pw[i])) v++;
            if((cv(pw[i]) == cv(pw[i + 1]) && cv(pw[i]) == cv(pw[i + 2])) || (pw[i] == pw[i + 1] && pw[i] != 'e' && pw[i] != 'o')) {
                ac = 0;
                break;
            }
        }
        if(!v) ac = 0;
        printf("<%s> is ", pw);
        if(!ac) printf("not ");
        printf("acceptable.\n");
    }
    return 0;
}

int cv(char c) {
    if(!c) return -1;
    return c == 'a' || c == 'e' || c == 'i' || c == 'o' || c == 'u';
}