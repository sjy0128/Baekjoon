#include <stdio.h>

int main(void) {
    int n;
    scanf("%d", &n);
    for(int i = 0; i < n + 2; i++) {
        for(int j = 0; j < n + 2; j++) {
            printf(!i || i == n + 1 || !j || j == n + 1 ? "@" : " ");
        }
        printf("\n");
    }
    return 0;
}