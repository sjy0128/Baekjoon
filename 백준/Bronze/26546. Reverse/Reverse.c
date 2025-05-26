#include <stdio.h>

int main(void) {
    int n, x, y, i, j;
    char str[101];
    scanf("%d", &n);
    for(i=0; i<n; i++) {
        scanf("%s %d %d", str, &x, &y);
        for(j=0; str[j]!='\0'; j++) {
            if(j == x) j = y - 1;
            else printf("%c", str[j]);
        }
        printf("\n");
    }
    return 0;
}