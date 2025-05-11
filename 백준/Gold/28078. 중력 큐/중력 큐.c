#include <stdio.h>

int main() {
    int queue[500000]={0,}, direction = 0, b = 0, w = 0, s = 0, e = 0, q;
    char query[7], temp;
    scanf("%d", &q);
    
    for(int i=0; i<q; i++) {
        scanf("%s ", query);
        switch(query[2]) {
            case 's':
                scanf("%c", &temp);
                if(temp == 'b') {
                    if((e - s) == 0 || queue[e-1] < 0) {
                        queue[e++] = 1;
                    } else queue[e-1]++;
                    b++;
                } else {
                    if((e - s) == 0 || queue[e-1] > 0) {
                        queue[e++] = -1;
                    } else queue[e-1]--;
                    w++;
                }
                break;
            case 'p':
                if((e - s) > 0) {
                    if(queue[s] > 0) {
                        if(queue[s] == 1) {
                            queue[s++] = 0;
                        } else queue[s]--;
                        b--;
                    } else {
                        if(queue[s] == -1) {
                            queue[s++] = 0;
                        } else queue[s]++;
                        w--;
                    }
                }
                break;
            case 't':
                scanf("%c", &temp);
                direction = (direction + (temp == 'r' ? 90 : 270)) % 360;
                break;
            case 'u':
                scanf("%c", &temp);
                printf("%d\n", temp == 'b' ? b : w);
        }
        if((e - s) > 0 && direction == 90 && queue[s] > 0) {
            b -= queue[s];
            queue[s++] = 0;
        }
        if((e - s) > 0 && direction == 270 && queue[e-1] > 0) {
            b -= queue[e-1];
            queue[--e] = 0;
        }
    }
    
    return 0;
}