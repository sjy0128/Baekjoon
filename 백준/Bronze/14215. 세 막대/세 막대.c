#include <stdio.h>

void swap(int *a, int *b);

int main(void) {
    int a, b, c;
    scanf("%d %d %d", &a, &b, &c);
    if(a > b) swap(&a, &b);
    if(a > c) swap(&a, &c);
    if(b > c) swap(&b, &c);
    printf("%d", a + b > c ? a + b + c : (a + b)*2 - 1);
    return 0;
}

swap(int *a, int *b) {
    int temp = *a;
    *a = *b;
    *b = temp;
}