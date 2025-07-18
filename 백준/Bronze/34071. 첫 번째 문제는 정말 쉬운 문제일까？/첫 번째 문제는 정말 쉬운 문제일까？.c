#include <stdio.h>

int main() {
    int n, i, t, f, ma, mi;
    scanf("%d", &n);
    scanf("%d", &f);
    ma = f;
    mi = f;
    for(i=0; i<n-1; i++) {
        scanf("%d", &t);
        if(t > ma) ma = t;
        if(t < mi) mi = t;
    }
    printf("%s", f == ma ? "hard" : (f == mi ? "ez" : "?"));
    return 0;
}