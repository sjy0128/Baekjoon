#include <stdio.h>

int main(void) {
    int n, m;
    scanf("%d %d", &n, &m);
    printf("SN %d", n);
    if(m <= 26) printf("%c", 'A'+m-1);
    else printf("%c%c", 'a'+(m-1)/26-1, m%26 == 0 ? 'z' : 'a'+m%26-1);
    return 0;
}