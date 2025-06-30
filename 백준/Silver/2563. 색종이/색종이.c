#include <stdio.h>

int main() {
    int n, i, j, x, y, arr[100][101]={0,}, count=0;
    scanf("%d", &n);
    for(i=0; i<n; i++) {
        scanf("%d %d", &x, &y);
        for(j=y; j<y+10; j++) {
            arr[j][x]++;
            arr[j][x+10]--;
        }
    }
    for(i=0; i<100; i++) {
        for(j=0; j<100; j++) {
            if(arr[i][j] >= 1) count++;
            arr[i][j+1] += arr[i][j];
        }
    }
    printf("%d", count);
    return 0;
}