#include <stdio.h>

int main() {
    int n, i, j, min=1000000000, temp;
    scanf("%d", &n);
    for(i=0; i<n; i++) {
        scanf("%d", &temp);
        if(temp < min) {
            j = i;
            min = temp;
        }
    }
    printf("%d", j);
    return 0;
}