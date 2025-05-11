#include <stdio.h>
int main(void){
    int n, arr[100], v, count=0;
    scanf("%d", &n);
    for(int i=0; i<n; i++){
        scanf("%d", &arr[i]);
    }
    scanf("%d", &v);
    for(int i=0; i<n; i++){
        if(arr[i]==v){
            count++;
        }
    }
    printf("%d", count);
}