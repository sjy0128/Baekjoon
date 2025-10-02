#include <stdio.h>

int a[1000], b[1000];
int i;

void f();

int main(void) {
    int t, n;
    scanf("%d", &t);
    while(t--) {
        scanf("%d", &n);
        for(int j=0; j<n; j++) scanf("%d", &a[j]);
        for(int j=0; j<n; j++) scanf("%d", &b[j]);
        i = -1;
        f(0, n-1);
        printf("\n");
    }
    return 0;
}

void f(int x, int y) {
    int j=x;
    if(x > y) return;
    i++;
    while(b[j]!=a[i]) j++;
    f(x, j-1);
    f(j+1, y);
    printf("%d ", b[j]);
}