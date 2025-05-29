#include <stdio.h>

int main(void) {
    char a[20], b[20], i;
    scanf("%s\n%s", a, b);
    for(i=0; a[i]!='\0'; i++) {
        printf("%c", a[i] > b[i] ? a[i] : b[i]);
    }
    return 0;
}