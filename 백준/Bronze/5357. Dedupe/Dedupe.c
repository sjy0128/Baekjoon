#include <stdio.h>

int main(void) {
    int n;
    char str[101], temp;
    scanf("%d", &n);
    for(int i=0; i<n; i++) {
        temp = '\0';
        scanf("%s", str);
        for(int j=0; str[j]!='\0'; j++) {
            if(temp == '\0' || str[j]!=temp) {
                temp = str[j];
                printf("%c", temp);
            }
        }
        printf("\n");
    }
    return 0;
}