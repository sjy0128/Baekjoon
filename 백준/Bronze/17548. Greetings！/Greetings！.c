#include <stdio.h>

int main() {
    int i;
    char g[1001];
    scanf("%s", g);
    for(i=0; g[i]!='\0'; i++) {
        if(g[i] == 'e') printf("ee");
        else printf("%c", g[i]);
    }
    return 0;
}