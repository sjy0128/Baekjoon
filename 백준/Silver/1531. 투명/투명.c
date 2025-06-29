#include <stdio.h>

int main(void) {
    int n, m, i, j, x1, x2, y1, y2, arr[100][101]={0,}, count=0;
    scanf("%d %d", &n, &m);
    for(i=0; i<n; i++) {
        scanf("%d %d %d %d", &x1, &y1, &x2, &y2);
        for(j=y1-1; j<=y2-1; j++) {
            arr[j][x1-1]++;
            arr[j][x2]--;
        }
    }
    for(i=0; i<100; i++) {
        for(j=0; j<100; j++) {
            if(arr[i][j] > m) count++;
            arr[i][j+1] += arr[i][j];
        }
    }
    printf("%d", count);
    return 0;
}