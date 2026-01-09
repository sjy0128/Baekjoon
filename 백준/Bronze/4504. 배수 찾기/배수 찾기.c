#include <stdio.h>

int main(void) {
    int n, ai;
    scanf("%d", &n);
    while(1) {
        scanf("%d", &ai);
        if(!ai) break;
        printf("%d is ", ai);
        if(ai % n) printf("NOT ");
        printf("a multiple of %d.\n", n);
    }
    return 0;
}