#include <stdio.h>

int main(void) {
    int m, s[20]={0,}, x;
    char c[7];
    scanf("%d", &m);
    while(m--) {
        scanf("%s", c);
        if(c[1] == 'l') {
            for(int i=0; i<20; i++) s[i] = 1;
        } else if(c[1] == 'm') {
            for(int i=0; i<20; i++) s[i] = 0;
        } else {
            scanf("%d", &x);
            x--;
            switch(c[1]) {
                case 'd':
                    s[x] = 1;
                    break;
                case 'e':
                    s[x] = 0;
                    break;
                case 'h':
                    printf("%d\n", s[x]);
                    break;
                case 'o':
                    s[x] = !s[x];
            }
        }
    }
    return 0;
}