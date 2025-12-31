#include <stdio.h>

int main(void) {
    int h, w, min;
    char joi[100][101];
    scanf("%d %d", &h, &w);
    for(int i = 0; i < h; i++) scanf("%s", joi[i]);
    for(int i = 0; i < h; i++) {
        min = -1;
        for(int j = 0; j < w; j++) {
            if(joi[i][j] == 'c') min = 0;
            else if(min != -1) min++;
            printf("%d ", min);
        }
        printf("\n");
    }
    return 0;
}