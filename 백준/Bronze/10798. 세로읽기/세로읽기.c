#include <stdio.h>
#define R(i, n) for(int i = 0; i < n; i++)

int main(void) {
    char a[5][16] = {0,};
    R(i, 5) scanf("%s", a[i]);
    R(i, 15) {
        R(j, 5) {
            if(a[j][i]) printf("%c", a[j][i]);
        }
    }
    return 0;
}