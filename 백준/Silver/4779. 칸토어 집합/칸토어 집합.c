#include <stdio.h>

void f(int n), f2(int n);

int main(void) {
    int n, l;
    while(scanf("%d", &n) != EOF) {
        f(n);
        printf("-\n");
    }
    return 0;
}

void f(int n) {
    if(n == 0) return;
    f(n-1);
    printf("-");
    f2(n-1);
    f(n-1);
}

void f2(int n) {
    int r=1;
    for(int i=0; i<n; i++) r *= 3;
    for(int i=0; i<r; i++) printf(" ");
}