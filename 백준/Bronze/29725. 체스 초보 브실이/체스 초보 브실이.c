#include <stdio.h>

int main(void) {
    int b=0, w=0, i, j;
    char temp;
    for(i=0; i<8; i++) {
        for(j=0; j<8; j++) {
            scanf("%c ", &temp);
            switch(temp) {
                case 'P':
                    w += 1;
                    break;
                case 'p':
                    b += 1;
                    break;
                case 'N':
                case 'B':
                    w += 3;
                    break;
                case 'n':
                case 'b':
                    b += 3;
                    break;
                case 'R':
                    w += 5;
                    break;
                case 'r':
                    b += 5;
                    break;
                case 'Q':
                    w += 9;
                    break;
                case 'q':
                    b += 9;
                    break;
            }
        }
    }
    printf("%d", w - b);
    return 0;
}