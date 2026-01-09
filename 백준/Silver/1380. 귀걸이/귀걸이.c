#include <stdio.h>
#define MAX_CNT 100
#define MAX_LEN 62

int main(void) {
    int n, a[MAX_CNT], b[MAX_CNT], num, sce = 1;
    char name[MAX_CNT][MAX_LEN], ab;
    while(1) {
        scanf("%d\n", &n);
        if(!n) break;
        for(int i=0; i<n; i++) {
            fgets(name[i], MAX_LEN, stdin);
            a[i] = b[i] = 0;
        }
        for(int i=0; i<n*2-1; i++) {
            scanf("%d %c", &num, &ab);
            if(ab == 'A') a[num - 1] = 1;
            else b[num - 1] = 1;
        }
        for(int i=0; i<n; i++) {
            if(!a[i] || !b[i]) {
                printf("%d %s", sce, name[i]);
            }
        }
        sce++;
    }
    return 0;
}