#include <stdio.h>

int n, a[30];

void f(int s, int d);

int main(void) {
    scanf("%d", &n);
    f(0, 0);
    return 0;
}

void f(int s, int d) {
    if(s == n) {
        for(int i=0; i<d; i++) printf("%d ", a[i]);
        printf("\n");
        return;
    }
    for(int i=0; i<n; i++) {
        if((!d || (n-i) <= a[d-1]) && s + (n-i) <= n) {
            f(s+(a[d]=n-i), d+1);
        }
    }
}