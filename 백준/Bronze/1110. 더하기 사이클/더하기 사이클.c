#include <stdio.h>

int main(void) {
    int n, temp, i;
    scanf("%d", &n);
    temp = n;
    for(i=0; n!=temp || i==0; i++) temp = (temp % 10 * 10) + (temp/10 + temp%10)%10;
    printf("%d", i);
    return 0;
}