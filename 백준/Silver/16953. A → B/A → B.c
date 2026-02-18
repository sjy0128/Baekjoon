#include <stdio.h>

int main(void) {
    int a, b, ans = 1;
    scanf("%d %d", &a, &b);
    while(b > a) {
        if(!(b % 2)) b /= 2, ans++;
        else if(b % 10 == 1) b /= 10, ans++;
        else break;
    }
    printf("%d", b == a ? ans : -1);
    return 0;
}