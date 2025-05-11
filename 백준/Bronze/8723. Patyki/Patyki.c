#include <stdio.h>

void swap(int *a, int *b) {
    int temp = *a;
    *a = *b;
    *b = temp;
}

int main(void) {
    int a, b, c;
    scanf("%d %d %d", &a, &b, &c);
    if(b > c) swap(&b, &c);
    if(a > c) swap(&a, &c);
    if(a > b) swap(&a, &b);
    
    printf("%d", a==b && b==c ? 2 : (a*a + b*b == c*c ? 1 : 0));
    return 0;
}