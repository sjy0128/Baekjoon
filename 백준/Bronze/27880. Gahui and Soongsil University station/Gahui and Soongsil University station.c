#include <stdio.h>

int main(void) {
    int sum=0, temp, i;
    char se[6];
    for(i=0; i<4; i++) {
        scanf("%s %d", se, &temp);
        sum += temp * (se[0] == 'E' ? 21 : 17);
    }
    printf("%d", sum);
    return 0;
}