#include <stdio.h>

int main(void) {
    int n, i, j, a, score;
    scanf("%d", &n);
    for(i=1; i<=n; i++) {
        score = 0;
        for(j=1; j<=10; j++) {
            scanf("%d", &a);
            if(a == ((j-1) % 5) + 1) score++;
        }
        if(score == 10) printf("%d\n", i);
    }
    return 0;
}