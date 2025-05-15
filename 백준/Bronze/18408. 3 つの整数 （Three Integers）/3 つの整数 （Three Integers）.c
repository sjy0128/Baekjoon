#include <stdio.h>

int main() {
    int o=0, t=0, temp, i;
    for(i=0; i<3; i++) {
        scanf("%d", &temp);
        if(temp == 1) o++;
        else t++;
    }
    printf(o > t ? "1" : "2");
    return 0;
}