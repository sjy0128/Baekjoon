#include <stdio.h>

int main() {
    int M=0, O=0, B=0, I=0, S=0, i;
    char str[101];
    scanf("%s", str);
    for(i=0; str[i]!='\0'; i++) {
        if(str[i] == 'M') M = 1;
        if(str[i] == 'O') O = 1;
        if(str[i] == 'B') B = 1;
        if(str[i] == 'I') I = 1;
        if(str[i] == 'S') S = 1;
        if(M && O && B && I && S) break;
    }
    printf(M && O && B && I && S ? "YES" : "NO");
    return 0;
}