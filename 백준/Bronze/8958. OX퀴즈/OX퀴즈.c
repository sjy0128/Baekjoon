#include <stdio.h>

int main(void) {
    int n, score, renzoku;
    char result[81];
    scanf("%d", &n);
    for(int i=0; i<n; i++) {
        score = 0;
        renzoku = 1;
        scanf("%s", result);
        for(int j=0; result[j]!='\0'; j++) {
            if(result[j] == 'O') score += renzoku++;
            else renzoku = 1;
        }
        printf("%d\n", score);
    }
    return 0;
}