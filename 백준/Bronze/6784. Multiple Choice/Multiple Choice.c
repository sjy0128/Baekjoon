#include <stdio.h>

int main() {
    int n, i, c=0;
    char a[10000], t;
    scanf("%d", &n);
    for(i=0; i<n; i++) scanf("\n%c", &a[i]);
    for(i=0; i<n; i++) {
        scanf("\n%c", &t);
        if(a[i] == t) c++;
    }
    printf("%d", c);
    return 0;
}