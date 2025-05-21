#include <stdio.h>

int main(void) {
    int n, i, f, j;
    scanf("%d", &n);
    for(j=0; j<n; j++) {
        scanf("%d %d", &i, &f);
        if((i <= 1 && f <= 2) || (i <= 2 && f <= 1)) printf("Yes\n");
        else printf("No\n");
    }
    return 0;
}