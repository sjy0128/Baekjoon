#include <stdio.h>

int main() {
    int s, A=0, B=0, i;
    char team;
    while(scanf("%c%d", &team, &s) != EOF) {
        if(team == 'A') A += s;
        else B += s;
        if(A >= 11 && B < 10) {
            printf("A");
            break;
        }
        if(B >= 11 && A < 10) {
            printf("B");
            break;
        }
        if(A >= 10 && B >= 10) {
            if(A >= B + 2) {
                printf("A");
                break;
            } else if(B >= A + 2) {
                printf("B");
                break;
            }
        }
    }
    return 0;
}