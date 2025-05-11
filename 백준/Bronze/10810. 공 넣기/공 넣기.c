#include <stdio.h>

int main() {
    int n, m, i, j, k, arr[100]={0,};
    scanf("%d %d", &n, &m);
    for(int l=0; l<m; l++){
        scanf("%d %d %d", &i, &j, &k);
        for(int o=i-1; o<=j-1; o++){
            arr[o]=k;
        }
    }
    for(int l=0; l<n; l++){
        printf("%d ", arr[l]);
    }
    return 0;
}