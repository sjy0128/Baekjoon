#include <stdio.h>

int main(void) {
    int i, j, t;
    char s[102], p[100];
    while(1) {
        fgets(s, 102, stdin);
        if(s[0] == '.') break;
        t = 1;
        for(i=0, j=-1; s[i]!='\0'; i++) {
            if(s[i] == '(' || s[i] == '[') p[++j] = s[i];
            if(s[i] == ')') {
                if(p[j--] != '(') {
                    t = 0;
                    break;
                }
            }
            if(s[i] == ']') {
                if(p[j--] != '[') {
                    t = 0;
                    break;
                }
            }
        }
        printf(j == -1 && t ? "yes\n" : "no\n");
    }
    return 0;
}