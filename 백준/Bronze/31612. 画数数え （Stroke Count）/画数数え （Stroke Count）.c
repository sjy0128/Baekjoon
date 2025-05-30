#include <stdio.h>

int main() {
    int n, i, sum=0;
    char temp;
    scanf("%d\n", &n);
    for(i=0; i<n; i++) {
        scanf("%c", &temp);
        switch(temp) {
            case 'o':
                sum += 1;
                break;
            default:
                sum += 2;
        }
    }
    printf("%d", sum);
    return 0;
}