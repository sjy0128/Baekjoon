#include <stdio.h>

int main(void) {
    int n, i, j;
    char ec[102];
    scanf("%d", &n);
    for(i=0; i<n; i++) {
        scanf("%s", ec);
        for(j=0; ec[j]!='\0'; j++);
        printf("%d\n", j);
    }
    return 0;
}