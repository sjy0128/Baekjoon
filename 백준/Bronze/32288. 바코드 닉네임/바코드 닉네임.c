#include <stdio.h>

int main(void) {
    int n, i;
    char si;
    scanf("%d\n", &n);
    for(i=0; i<n; i++) {
        scanf("%c", &si);
        if(si == 'l') printf("L");
        else printf("i");
    }
    return 0;
}