#include <stdio.h>
int main(void) {
    int n, u, l;
    scanf("%d %d %d", &n, &u, &l);
    if(n >= 1000) {
        if(u >= 8000 || l >= 260) {
            printf("Very Good");
        } else {
            printf("Good");
        }
    } else {
        printf("Bad");
    }
    return 0;
}