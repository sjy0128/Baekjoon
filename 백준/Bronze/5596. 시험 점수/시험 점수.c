#include <stdio.h>

int main(void) {
    int score, S=0, T=0;
    for(int i=0; i<8; i++) {
        scanf("%d", &score);
        if(i < 4) {
            S += score;
        } else {
            T += score;
        }
    }
    printf("%d", S >= T ? S : T);
    
    return 0;
}