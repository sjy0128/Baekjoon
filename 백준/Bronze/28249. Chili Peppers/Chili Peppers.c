#include <stdio.h>
int main(void) {
    int n, i, sum=0;
    char pn[9];
    scanf("%d", &n);
    for(i=0; i<n; i++) {
        scanf("%s", pn);
        switch(pn[0]) {
            case 'P':
                sum += 1500;
                break;
            case 'M':
                sum += 6000;
                break;
            case 'S':
                sum += 15500;
                break;
            case 'C':
                sum += 40000;
                break;
            case 'T':
                sum += 75000;
                break;
            default:
                sum += 125000;
        }
    }
    printf("%d", sum);
    return 0;
}