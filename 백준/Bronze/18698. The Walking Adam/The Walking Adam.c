#include <stdio.h>

int main() {
    int t, i, j;
    char ud[101];
    scanf("%d", &t);
    for(i=0; i<t; i++) {
        scanf("%s", ud);
        for(j=0; ud[j]!='\0'; j++) {
            if(ud[j] == 'D') break;
        }
        printf("%d\n", j);
    }
    return 0;
}