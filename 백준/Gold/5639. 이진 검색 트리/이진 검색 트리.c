#include <stdio.h>

int a[10000], n=-1;

void f(int s, int e);

int main(void) {
    while(scanf("%d", &a[++n])!=EOF);
    f(0, n-1);
    return 0;
}

void f(int s, int e) {
    if(s > e) return;
    int i;
    for(i=s; i<=e; i++) {
        if(a[i] > a[s]) break;
    }
    f(s+1, i-1);
    f(i, e);
    printf("%d\n", a[s]);
}