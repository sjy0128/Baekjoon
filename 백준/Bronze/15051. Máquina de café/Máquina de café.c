#include <stdio.h>

int main(void) {
    int a1, a2, a3;
    scanf("%d\n%d\n%d", &a1, &a2, &a3);
    printf("%d", a1+a2<a3 ? (a1*2+a2)*2 : (a3+a2<a1 ? (a3*2+a2)*2 : (a1+a3)*2));
    
    return 0;
}