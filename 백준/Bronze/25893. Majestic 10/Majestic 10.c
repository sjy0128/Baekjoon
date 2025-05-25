#include <stdio.h>

int main(void) {
    int n, a[3], count, i, j;
    scanf("%d", &n);
    for(i=0; i<n; i++) {
        count = 0;
        for(j=0; j<3; j++) {
            scanf("%d", &a[j]);
            if(a[j] >= 10) count++;
        }
        printf("%d %d %d\n", a[0], a[1], a[2]);
        switch(count) {
            case 0:
                printf("zilch");
                break;
            case 1:
                printf("double");
                break;
            case 2:
                printf("double-double");
                break;
            default:
                printf("triple-double");
        }
        printf("\n\n");
    }
    return 0;
}