#include <stdio.h>

int main(void) {
    int ds, ys, dm, ym, i=0;
    scanf("%d %d\n%d %d", &ds, &ys, &dm, &ym);
    while(1) {
        if((i+ds)%ys==0 && (i+dm)%ym==0) break;
        else i++;
    }
    printf("%d", i);
    return 0;
} 