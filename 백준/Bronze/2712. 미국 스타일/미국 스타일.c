#include <stdio.h>

int main(void) {
    int t, i;
    float v;
    char u[3];
    scanf("%d", &t);
    for(i=0; i<t; i++) {
        scanf("%f %s", &v, u);
        switch(u[0]) {
            case 'k':
                printf("%.04f lb\n", v*2.2046);
                break;
            case 'l':
                if(u[1] == '\0') {
                    printf("%.04f g\n", v*0.2642);
                } else {
                    printf("%.04f kg\n", v*0.4536);
                }
                break;
            case 'g':
                printf("%.04f l\n", v*3.7854);
        }
    }
    return 0;
}