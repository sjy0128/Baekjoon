#include <stdio.h>

int main(void) {
    int a, b, c;
    scanf("%d %d %d", &a, &b, &c);
    printf((a==1||a==3)&&(b==6||b==8)&&(c==2||c==5) ? "JAH" : "EI"); 
    return 0;
}