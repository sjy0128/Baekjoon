#include <stdio.h>

int main() {
    int n, i, temp, num[2000001]={0,};
    scanf("%d", &n);
    for(i=0; i<n; i++) {
        scanf("%d", &temp);
        num[temp+1000000] = 1;
    }
    for(i=0; i<2000001; i++) {
        if(num[i] == 1) printf("%d\n", i-1000000);
    }
    return 0;
}