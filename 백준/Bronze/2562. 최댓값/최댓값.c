#include <stdio.h>

int main() {
    int temp, max=0, max_idx=0;
    for(int i=1; i<=9; i++){
        scanf("%d", &temp);
        if(temp > max){
            max = temp;
            max_idx = i;
        }
    }
    printf("%d\n%d", max, max_idx);
    return 0;
}