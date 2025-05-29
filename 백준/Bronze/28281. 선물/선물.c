#include <stdio.h>

int main(void) {
    int n, x, temp, temp2, i, min=2000;
    scanf("%d %d %d", &n, &x, &temp);
    for(i=0; i<n-1; i++) {
        temp2 = temp;
        scanf("%d", &temp);
        if(temp+temp2 < min) min = temp+temp2;
    }
    printf("%d", min*x);
    return 0;
}