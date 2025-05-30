#include <stdio.h>

int main() {
    int i;
    char temp='\0', s[1001];
    fgets(s, 1000, stdin);
    for(i=0; s[i]!='\0'; i++) {
        if(s[i] != temp) {
            temp = s[i];
            printf("%c", temp);
        }
    }
    return 0;
}