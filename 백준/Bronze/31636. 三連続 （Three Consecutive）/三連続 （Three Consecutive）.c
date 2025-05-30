#include <stdio.h>

int main() {
    int n, i, count=0;
    char temp;
    scanf("%d\n", &n);
    for(i=0; i<n; i++) {
        scanf("%c", &temp);
        if(temp == 'o') count++;
        else count = 0;
        if(count == 3) {
            printf("Yes");
            return 0;
        }
    }
    printf("No");
    return 0;
}