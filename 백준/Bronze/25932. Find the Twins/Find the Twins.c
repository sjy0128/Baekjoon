#include <stdio.h>

int main(void) {
    int n, temp, m, z, i, j;
    scanf("%d", &n);
    for(i=0; i<n; i++) {
        m = 0;
        z = 0;
        for(j=0; j<10; j++) {
            scanf("%d", &temp);
            printf("%d ", temp);
            if(temp == 18) m = 1;
            if(temp == 17) z = 1;
        }
        printf("\n%s\n\n", m && z ? "both" : (m ? "mack" : (z ? "zack" : "none")));
    }
    return 0;
}