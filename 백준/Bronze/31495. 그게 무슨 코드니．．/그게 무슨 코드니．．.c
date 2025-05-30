#include <stdio.h>
int main(void) {
    int i;
    char s[51];
    scanf("%[^\n]s", s);
    if(s[0] != '"') {
        printf("CE");
    } else {
        for(i=0; s[i]!='\0'; i++);
        if(i <= 2 || s[i-1] != '"') {
            printf("CE");
        } else {
            for(i=1; s[i+1]!='\0'; i++) {
                printf("%c", s[i]);
            }
        }
    }
    return 0;
}