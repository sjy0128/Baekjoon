#include <stdio.h>

int main(void) {
    int x, i, n=1, col=1, row=1, direction=1;
    scanf("%d", &x);
    for(i=0; i < x-1; i++) {
        if(direction == 1) {
            if(row == 1) {
                col++;
                direction = 2;
            } else {
                row--;
                col++;
            }
        } else {
            if(col == 1) {
                row++;
                direction = 1;
            } else {
                row++;
                col--;
            }
        }
    }
    printf("%d/%d", row, col);
    
    return 0;
}