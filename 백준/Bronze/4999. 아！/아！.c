#include <stdio.h>
int main(void) {
    int i=0;
    char a[1000], b[1000];
    scanf("%s\n%s", a, b);
    while(a[i++]!='h');
    printf("%s", b[i-1]!='a'?"go":"no");
    return 0;
}