#include <stdio.h>

int main(void) {
    int count, max;
    char temp, temp2;
    for(int i=0; i<3; i++) {
        count = 0;
        max = 0;
        for(int j=0; j<8; j++) {
            scanf("%c ", &temp);
            if(j == 0 || temp != temp2) {
                temp2 = temp;
                count = 0;
            } else {
                count++;
                if(count > max) max = count;
            }
        }
        printf("%d\n", max+1);
    }
    return 0;
}