#include <stdio.h>

int main(void) {
    int n, i;
    char si;
    scanf("%d\n", &n);
    for(i=0; i<n; i++) {
        scanf("%c", &si);
        switch(si) {
            case 'J':
                printf("O");
                break;
            case 'O':
                printf("I");
                break;
            default:
                printf("J");
        }
    }
    return 0;
}