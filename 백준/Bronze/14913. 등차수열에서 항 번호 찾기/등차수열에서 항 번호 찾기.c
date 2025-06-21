#include <stdio.h>

int main() {
    int a, d, k, i;
    scanf("%d %d %d", &a, &d, &k);
    if(d > 0) for(i=1; a<k && a>=-1000000; i++, a+=d);
    else for(i=1; a>k && a<=1000000; i++, a+=d);
    if(a == k) printf("%d", i);
    else printf("X");
    return 0;
}