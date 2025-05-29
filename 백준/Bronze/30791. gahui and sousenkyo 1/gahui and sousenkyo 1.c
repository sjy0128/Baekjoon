#include <stdio.h>
int main(void) {
    int stv, temp, i, count=0;
    scanf("%d", &stv);
    for(i=0; i<4; i++) {
        scanf("%d", &temp);
        if(temp != stv && stv - temp >= -1000 && stv - temp <= 1000) {
            count++;
        }
    }
    printf("%d", count);
    return 0;
}