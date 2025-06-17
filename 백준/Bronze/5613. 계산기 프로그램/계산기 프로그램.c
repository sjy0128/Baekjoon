#include <stdio.h>

int main(void) {
    int num, res;
    char op;
    scanf("%d\n", &num);
    res = num;
    while(scanf("%c\n%d\n", &op, &num)==2) {
        switch(op) {
            case '+':
                res += num;
                break;
            case '-':
                res -= num;
                break;
            case '*':
                res *= num;
                break;
            case '/':
                res /= num;
                break;
        }
    }
    printf("%d", res);
    return 0;
}