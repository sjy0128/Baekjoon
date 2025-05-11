#include <stdio.h>

int main(void) {
    int n[10]={0,}, m, a, b, c;
    scanf("%d\n%d\n%d", &a, &b, &c);
    m = a * b * c;
    while(1) {
        n[m % 10]++;
        m /= 10;
        if(m == 0) break;
    }
    for(int i=0; i<=9; i++) {
        printf("%d\n", n[i]);
    }
    return 0;
}