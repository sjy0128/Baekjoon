#include <stdio.h>

int main() {
    int i, count=0, y=0;
    char str[51];
    scanf("%s", str);
    for(i=0; str[i]!='\0'; i++) {
        switch(str[i]) {
            case 'a':
            case 'e':
            case 'i':
            case 'o':
            case 'u':
                count++;
                break;
            case 'y':
                y++;
                break;
        }
    }
    printf("%d %d", count, count+y);
    return 0;
}