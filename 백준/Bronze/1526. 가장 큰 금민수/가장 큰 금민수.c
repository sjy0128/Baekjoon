#include <stdio.h>

int main() {
    int n, i, t=0;
    scanf("%d", &n);
    while(!t) {
        t = 1;
        for(i=n; i>0; i/=10) {
            if(i % 10 != 4 && i % 10 != 7) t = 0;
        }
        if(!t) n--;
    }
    printf("%d", n);
    return 0;
}