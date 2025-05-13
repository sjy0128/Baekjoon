#include <stdio.h>

int main() {
    int sum=0, temp;
    while(1) {
        scanf("%d", &temp);
        if(temp == -1) break;
        sum += temp;
    }
    printf("%d", sum);
    return 0;
}