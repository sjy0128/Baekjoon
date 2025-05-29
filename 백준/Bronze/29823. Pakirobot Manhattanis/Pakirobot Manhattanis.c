#include <stdio.h>
int main(void) {
    int n, i, x=0, y=0;
    char temp;
    scanf("%d\n", &n);
    for(i=0; i<n; i++) {
        scanf("%c", &temp);
        switch(temp) {
            case 'N':
                y++;
                break;
            case 'S':
                y--;
                break;
            case 'E':
                x++;
                break;
            case 'W':
                x--;
                break;
        }
    }
    printf("%d", (x > 0 ? x : -x) + (y > 0 ? y : -y));
    return 0;
}