#include <stdio.h>
int main(void) {
    int n, w, h, i, sum=0;
    scanf("%d", &n);
    for(i=0; i<n; i++) {
        scanf("%d %d", &w, &h);
        switch(w) {
            case 136:
                sum += 1000;
                break;
            case 142:
                sum += 5000;
                break;
            case 148:
                sum += 10000;
                break;
            case 154:
                sum += 50000;
                break;
        }
    }
    printf("%d", sum);
    return 0;
}