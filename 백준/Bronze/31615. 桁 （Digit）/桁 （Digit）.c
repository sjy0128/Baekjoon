#include <stdio.h>

int main() {
    int a, b, sum, i;
    scanf("%d\n%d", &a, &b);
    for(sum = a + b, i=0; sum>0; sum/=10, i++);
    printf("%d", i);
    return 0;
}