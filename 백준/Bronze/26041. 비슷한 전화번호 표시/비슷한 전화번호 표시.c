#include <stdio.h>

int main(void) {
    int i=0, j, b, len, temp, count=0;
    char a[100001][11];
    while(scanf("%s", a[i++])!=EOF);
    b = i-2;
    for(len=0; a[b][len]!='\0'; len++);
    for(i=0; i<b; i++) {
        temp = 1;
        for(j=0; j<len; j++) {
            if(a[b][j] != a[i][j] || a[i][j+1] == '\0') {
                temp = 0;
                break;
            }
        }
        if(temp) count++;
    }
    printf("%d", count);
    return 0;
}