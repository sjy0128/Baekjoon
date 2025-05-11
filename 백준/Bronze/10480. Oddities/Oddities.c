#include <stdio.h>

int main(void) {
    int n, temp;
    scanf("%d", &n);
    for(int i=0; i<n; i++) {
        scanf("%d", &temp);
        printf("%d is %s\n", temp, temp % 2 == 1 || temp % 2 == -1 ? "odd" : "even");
    }
    return 0;
}