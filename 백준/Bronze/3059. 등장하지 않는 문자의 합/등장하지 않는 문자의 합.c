#include <stdio.h>
#define MAX 1001

int main(void) {
    int t, az[26], sum;
    char s[MAX];
    scanf("%d", &t);
    while(t--) {
        scanf("%s", s);
        for(int i = 0; i < 26; i++) az[i] = 1;
        for(int i = 0; s[i] != '\0'; i++) az[s[i] - 'A'] = 0;
        sum = 0;
        for(int i = 0; i < 26; i++) sum += az[i] * (i + 'A');
        printf("%d\n", sum);
    }
    return 0;
}