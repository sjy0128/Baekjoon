#include <stdio.h>
 
int main(void) {
    int a, b, v;
    scanf("%d %d %d", &a, &b, &v);
    if(v > a) {
        v -= a;
        printf("%d",  (v-1)/(a-b)+2);
    } else printf("1");
    return 0;
}