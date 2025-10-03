#include <stdio.h>

int a[100000], b[100000];

void f(int x1, int y1, int x2, int y2);

int main(void) {
    int n;
    scanf("%d", &n);
    for(int i=0; i<n; i++) scanf("%d", &a[i]);
    for(int i=0; i<n; i++) scanf("%d", &b[i]);
    f(0, n-1, 0, n-1);
    return 0;
}

void f(int x1, int y1, int x2, int y2) {
    int j=0;
    if(x1 > y1 || x2 > y2) return;
    while(a[x1+j] != b[y2]) j++;
    printf("%d ", b[y2]);
    f(x1, x1+j-1, x2, x2+j-1);
    f(x1+j+1, y1, x2+j, y2-1);
}