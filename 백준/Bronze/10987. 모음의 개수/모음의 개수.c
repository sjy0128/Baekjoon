#include <stdio.h>

int main(void) {
    int count=0;
    char str[101];
    scanf("%s", str);
    for(int i=0; str[i]!='\0'; i++) {
        switch(str[i]) {
            case 'a':
            case 'e':
            case 'i':
            case 'o':
            case 'u':
                count++;
                break;
        }
    }
    printf("%d", count);
    return 0;
}