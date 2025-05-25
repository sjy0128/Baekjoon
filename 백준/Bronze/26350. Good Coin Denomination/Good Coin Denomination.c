#include <stdio.h>

int main(void) {
    int n, d, good, temp, temp2, i, j;
    scanf("%d", &n);
    for(i=0; i<n; i++) {
        scanf("%d", &d);
        printf("Denominations: ");
        good = 1;
        for(j=0; j<d; j++) {
            scanf("%d", &temp);
            printf("%d ", temp);
            if(j != 0 && temp < temp2*2) good = 0;
            temp2 = temp;
        }
        printf("\n%s coin denominations!\n\n", good ? "Good" : "Bad");
    }
    return 0;
}