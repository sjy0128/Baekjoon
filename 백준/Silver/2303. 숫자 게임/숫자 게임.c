#include <stdio.h>
#define MAX 1000

int main(void) {
    int n, arr[5], sum, max = 0, score[MAX] = {0,};
    scanf("%d", &n);
    for(int i = 0; i < n; i++) {
        for(int j = 0; j < 5; j++) scanf("%d", &arr[j]);
        sum = 0;
        for(int j = 0; j < 3; j++) {
            for(int k = j+1; k < 4; k++) {
                for(int l = k+1; l < 5; l++) {
                    sum = (arr[j] + arr[k] + arr[l]) % 10;
                    if(sum > score[i]) score[i] = sum;
                }
            }
        }
    }
    for(int i = 0; i < n; i++) {
        if(score[i] > max) max = score[i];
    }
    for(int i = n-1; i >= 0; i--) {
        if(score[i] == max) {
            printf("%d", i + 1);
            break;
        }
    }
    return 0;
}