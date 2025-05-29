#include <stdio.h>
int main(void) {
    int n, i, j;
    char name[101];
    scanf("%d", &n);
    for(i=0; i<n; i++) {
        scanf("%s", name);
        for(j=0; name[j]!='\0'; j++) {
            if(name[j] == 'S') {
                printf("%s", name);
                return 0;
            }
        }
    }
    return 0;
}