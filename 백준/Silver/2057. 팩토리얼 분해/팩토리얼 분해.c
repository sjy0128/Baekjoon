#include <stdio.h>

long long fact(int a);

int main(void) {
    long long n, fi;
    scanf("%lld", &n);
    if(!n) {
        printf("NO");
        return 0;
    }
    for(int i = 19; i >= 0; i--) {
        fi = fact(i);
        if(n >= fi) n -= fi;
    }
    printf(n ? "NO" : "YES");
    return 0;
}

long long fact(int a) {
    if(a <= 1) return 1;
    return a * fact(a-1);
}