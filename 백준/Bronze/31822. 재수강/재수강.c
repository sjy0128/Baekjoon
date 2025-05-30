#include <stdio.h>

int main(void) {
    int n, i, j, can, count=0;
    char sc[11], temp[11];
    scanf("%s\n%d", sc, &n);
    for(i=0; i<n; i++) {
        scanf("%s", temp);
        can = 1;
        for(j=0; j<5; j++) {
            if(sc[j] != temp[j]) {
                can = 0;
                break;
            }
        }
        if(can) count++;
    }
    printf("%d", count);
    return 0;
}