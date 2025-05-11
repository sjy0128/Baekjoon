#include <stdio.h>

int main() {
    int remain[10] = {-1,}, temp, temp2, i, j, count=0;
    for(i=0; i<10; i++){
        scanf("%d", &temp);
        temp2 = 0;
        for(j=0; remain[j]!=-1; j++){
            if(remain[j] == temp%42){
                temp2 = 1;
                break;
            }
        }
        if(temp2==0){
            remain[j] = temp%42;
            if(i<9)remain[j+1] = -1;
            count++;
        }
    }
    printf("%d", count);
    return 0;
}