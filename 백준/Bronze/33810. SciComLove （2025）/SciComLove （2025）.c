#include <stdio.h>
int main(void) {
    int i, count=0;
    char scl[11] = "SciComLove", s[11];
    scanf("%s", s);
    for(i=0; i<10; i++) {
        if(scl[i] != s[i]) count++;
    }
    printf("%d", count);
    return 0;
}