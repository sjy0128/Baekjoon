#include <stdio.h>

int main(void) {
    int n, i, o=0;
    char temp;
    scanf("%d\n", &n);
    for(i=0; i<n; i++) {
        scanf("%c", &temp);
        if(temp == 'O') o++;
    }
    printf(o*2 >= n ? "Yes" : "No");
    return 0;
}