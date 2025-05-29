#include <stdio.h>

int main(void) {
    int t, n, x, y;
    scanf("%d", &t);
    for(x=1; x<=t; x++) {
        scanf("%d", &n);
        printf("Case #%d: ", x);
        if(n > 25) {
            printf("Round ");
            if(n > 4500) printf("1");
            else if(n > 1000) printf("2");
            else printf("3");
        } else printf("World Finals");
        printf("\n");
    }
    return 0;
}