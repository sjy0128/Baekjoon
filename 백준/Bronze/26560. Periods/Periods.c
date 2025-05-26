#include <stdio.h>

int main(void) {
    int n, i, j;
    char str[1001];
    scanf("%d\n", &n);
    for(i=0; i<n; i++) {
        fgets(str, 1000, stdin);
        for(j=0; str[j]!='\n' && str[j]!='\0'; j++) {
            printf("%c", str[j]);
        }
        if(str[j-1] != '.') printf(".");
        printf("\n");
    }
    return 0;
}