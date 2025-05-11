#include <stdio.h>
int main(void) {
    int n, temp, odd=0, even=0;
    scanf("%d", &n);
    for(int i=0; i<n; i++) {
        scanf("%d", &temp);
        if(temp % 2 == 0) even++;
        else odd++;
    }
    printf(odd >= even ? "Sad" : "Happy");
    return 0;
}