#include <stdio.h>

int get_num(char var);

int main(void) {
    int a, b;
    a = get_num('A');
    b = get_num('B');
    printf("! %d\n", a + b);
    return 0;
}


int get_num(char var) {
    int ans;
    for(int x = 1; x <= 9; x++) {
        printf("? %c %d\n", var, x);
        fflush(stdout);
        scanf("%d", &ans);
        if(ans) return x;
    }
}