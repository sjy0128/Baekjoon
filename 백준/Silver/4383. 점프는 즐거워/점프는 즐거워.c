#include <stdio.h>

int abs(int a) {return a > 0 ? a : -a;}

int main() {
    int n, i, temp, a[3000], b[3001];
    while(scanf("%d", &n) != EOF) {
        if(n == 1) {
            scanf("%d", &b[0]);
            printf("Jolly\n");
            continue;
        }
        for(i=1; i<=n; i++) {
            b[i] = 0;
            scanf("%d", &a[i]);
        }
        for(i=1; i<=n-1; i++) {
            b[abs(a[i]-a[i+1])] = 1;
        }
        for(i=1; i<n; i++) {
            if(b[i] == 0) {
                printf("Not jolly\n");
                break;
            }
        }
        if(i >= n) printf("Jolly\n");
    }
    
    return 0;
}