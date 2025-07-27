#include <stdio.h>

int main(void) {
    int n, i;
    char w[101];
    scanf("%d", &n);
    for(i=0; i<n; i++) {
        scanf("%s", w);
        printf("%sDORO ", w);
    }
    return 0;
}