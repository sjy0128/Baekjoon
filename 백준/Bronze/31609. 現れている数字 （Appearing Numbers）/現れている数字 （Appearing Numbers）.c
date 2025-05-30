#include <stdio.h>

int main() {
    int n, i, a, b[10]={0,};
    scanf("%d", &n);
    for(i=0; i<n; i++) {
        scanf("%d", &a);
        b[a] = 1;
    }
    for(i=0; i<10; i++) {
        if(b[i] == 1) printf("%d\n", i);
    }
    return 0;
}