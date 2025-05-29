#include <stdio.h>
int main(void) {
    int n, k, g, i, p;
    scanf("%d %d", &n, &k);
    for(i=0; i<k; i++) {
        scanf("%d", &g);
        p = g*100/n;
        if(p > 96) printf("9 ");
        else if(p > 89) printf("8 ");
        else if(p > 77) printf("7 ");
        else if(p > 60) printf("6 ");
        else if(p > 40) printf("5 ");
        else if(p > 23) printf("4 ");
        else if(p > 11) printf("3 ");
        else if(p > 4) printf("2 ");
        else printf("1 ");
    }
    return 0;
}