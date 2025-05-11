#include <stdio.h>

int main(void) {
    int a, b, c;
    while(1) {
        scanf("%d %d %d", &a, &b, &c);
        if(a == 0 && b == 0 && c == 0) break;
        if(c > b) {
            if(a > c){
                int temp = a;
                a = c;
                c = temp;
            }
        } else {
            if(b > a){
                int temp = b;
                b = c;
                c = temp;
            } else {
                int temp = a;
                a = c;
                c = temp;
            }
        }
        printf("%s\n", a*a + b*b == c*c ? "right" : "wrong");
    }
    
    return 0;
}