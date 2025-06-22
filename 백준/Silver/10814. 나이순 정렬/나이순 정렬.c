#include <stdio.h>
int main(void) {
    int n, age[200][100001]={0,}, i, j, t, max=0;
    char name[100000][101];
    scanf("%d", &n);
    for(i=0; i<n; i++) {
        scanf("%d %s", &t, name[i]);
        age[t-1][++age[t-1][0]] = i;
        if(t > max) max = t;
    }
    for(i=0; i<max; i++) {
        for(j=1; j<=age[i][0]; j++) {
            printf("%d %s\n", i+1, name[age[i][j]]);
        }
    }
    return 0;
}