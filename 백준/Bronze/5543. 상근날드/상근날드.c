#include <stdio.h>

int find_min(int n) {
    int temp, min=2000;
    for(int i=0; i<n; i++) {
        scanf("%d", &temp);
        min = min > temp ? temp : min;
    }
    return min;
}

int main(void) {
    printf("%d", find_min(3) + find_min(2) - 50);
    
    return 0;
}