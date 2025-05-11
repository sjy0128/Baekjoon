#include <stdio.h>

int main(void) {
    int n, num, is_sosu, count=0;
    scanf("%d", &n);
    for(int i=0; i<n; i++) {
        scanf("%d", &num);
        if(num == 1) continue;
        is_sosu = 1;
        for(int j=2; j<num; j++) {
            if(num % j == 0) {
                is_sosu = 0;
                break;
            }
        }
        if(is_sosu) count++;
    }
    printf("%d", count);
    return 0;
}