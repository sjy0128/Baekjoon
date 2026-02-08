#include <stdio.h>

int main(void) {
    int n, x, y, c[5] = {0,};
    scanf("%d", &n);
    while(n--) {
        scanf("%d %d", &x, &y);
        c[!x || !y ? 4 : (x > 0 ? (y > 0 ? 0 : 3) : (y > 0 ? 1 : 2))]++;
    }
    for(int i = 0; i < 5; i++) {
        if(i < 4) printf("Q%d: ", i + 1);
        else printf("AXIS: ");
        printf("%d\n", c[i]);
    }
    return 0;
}