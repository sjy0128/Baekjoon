#include <stdio.h>

int main(void) {
    int n, i, j, temp;
    char fn[50][51];
    scanf("%d", &n);
    for(i=0; i<n; i++) {
        scanf("%s", fn[i]);
    }
    for(i=0; fn[0][i]!='\0'; i++) {
        temp = 1;
        for(j=0; j<n; j++) {
            if(fn[j][i] != fn[0][i]) {
                temp = 0;
                break;
            }
        }
        printf("%c", temp ? fn[0][i] : '?');
    }
    return 0;
}