#include <stdio.h>

int main(void) {
    int a, b, c, d;
    scanf("%d\n%d\n%d\n%d", &a, &b, &c, &d);
    if(a == b && b == c && c == d) {
        printf("Fish At Constant Depth");
    } else if (a > b && b > c && c > d) {
        printf("Fish Diving");
    } else if (a < b && b < c && c < d) {
        printf("Fish Rising");
    } else {
        printf("No Fish");
    }
    return 0;
}