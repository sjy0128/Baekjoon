#include <stdio.h>

int main(void) {
    int n;
    char str[21], temp;
    scanf("%d", &n);
    for(int i=0; i<n; i++) {
        scanf("%s", str);
        for(int j=0; str[j]!='\0'; j++) {
            if(str[j] < 'a') str[j] += 'a' - 'A';
            printf("%c", str[j]);
        }
        printf("\n");
    }
    return 0;
}