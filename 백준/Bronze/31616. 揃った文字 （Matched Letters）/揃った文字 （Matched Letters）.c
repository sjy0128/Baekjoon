#include <stdio.h>

int main() {
    int n, i;
    char fc, temp;
    scanf("%d\n%c", &n, &fc);
    for(i=0; i<n-1; i++) {
        scanf("%c", &temp);
        if(temp != fc) {
            printf("No");
            return 0;
        }
    }
    printf("Yes");
    return 0;
}