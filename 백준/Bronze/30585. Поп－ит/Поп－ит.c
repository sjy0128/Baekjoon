#include <stdio.h>
int main(void) {
    int h, w, i, j, o=0, z=0;
    char temp;
    scanf("%d %d\n", &h, &w);
    for(i=0; i<h*w; i++) {
        scanf("%c ", &temp);
        if(temp == '1') o++;
        else z++;
    }
    printf("%d", o < z ? o : z);
    return 0;
}