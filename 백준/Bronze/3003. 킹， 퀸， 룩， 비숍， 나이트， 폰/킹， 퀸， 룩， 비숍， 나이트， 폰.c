#include <stdio.h>
int main(void) {
    int a[6] = {1, 1, 2, 2, 2, 8}, temp;
    for(int i=0; i<6; i++) {
        scanf("%d", &temp);
        printf("%d ", a[i]-temp);
    }
}