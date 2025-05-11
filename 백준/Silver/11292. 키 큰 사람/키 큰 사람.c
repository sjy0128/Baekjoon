#include <stdio.h>
 
int main(void) {
    int n, i;
    float height[50], max;
    char name[50][11];
    while(1) {
        scanf("%d", &n);
        if(n == 0) break;
        max = 0;
        for(i=0; i<n; i++) {
            scanf("%s %f", name[i], &height[i]);
            if(height[i] > max) {
                max = height[i];
            }
        }
        for(i=0; i<n; i++) {
            if(height[i] == max) printf("%s ", name[i]);
        }
        printf("\n");
    }
    return 0;
}