#include <stdio.h>

int main() {
    int arr[30]={0,}, temp, i;
    for(i=0; i<28; i++){
        scanf("%d", &temp);
        arr[temp-1] = 1;
    }
    for(i=0; i<30; i++){
        if(arr[i]==0)printf("%d\n", i+1);
    }
    return 0;
}