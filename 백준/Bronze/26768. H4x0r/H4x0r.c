#include <stdio.h>

int main() {
    int i;
    char str[1000001];
    scanf("%s", str);
    for(i=0; str[i]!='\0'; i++) {
        switch(str[i]) {
            case 'a':
                printf("4");
                break;
            case 'e':
                printf("3");
                break;
            case 'i':
                printf("1");
                break;
            case 'o':
                printf("0");
                break;
            case 's':
                printf("5");
                break;
            default:
                printf("%c", str[i]);
        }
    }
    return 0;
}