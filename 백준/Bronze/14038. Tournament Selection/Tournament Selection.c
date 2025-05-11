#include <stdio.h>

int main(void) {
    int count=0;
    char temp;
    for(int i=0; i<6; i++) {
        scanf(" %c", &temp);
        if(temp == 'W') count++;
    }
    printf("%d", count == 0 ? -1 : 4 - (count + 1) / 2);
    return 0;
}