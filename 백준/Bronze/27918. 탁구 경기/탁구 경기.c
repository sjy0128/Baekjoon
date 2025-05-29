#include <stdio.h>

int main(void) {
    int n, p=0, d=0, i;
    char temp;
    scanf("%d", &n);
    for(i=0; i<n; i++) {
        scanf("\n%c", &temp);
        if(temp == 'D') d++;
        else p++;
        if(d - p == 2 || d - p == -2) break;
    }
    printf("%d:%d", d, p);
    return 0;
}