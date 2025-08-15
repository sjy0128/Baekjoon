#include <stdio.h>

int main(void) {
    int k, h;
    char a[101];
    scanf("%d", &k);
    for(int i=1; i<=k; i++) {
        scanf("%d\n%s", &h, a);
        for(int j=0; a[j]!='\0'; j++) {
            h += a[j] == 'c' ? 1 : -1;
        }
        printf("Data Set %d:\n%d\n\n", i, h);
    }
    return 0;
}