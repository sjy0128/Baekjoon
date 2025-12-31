#include <stdio.h>
#define MAX 1001

int main(void) {
    int n, alphabet[26], min;
    char str[MAX];
    scanf("%d\n", &n);
    for(int i = 0; i < n; i++) {
        fgets(str, MAX, stdin);
        for(int j = 0; j < 26; j++) alphabet[j] = 0;
        for(int j = 0; str[j]; j++) {
            if(str[j] >= 'a' && str[j] <= 'z') alphabet[str[j] - 'a']++;
            if(str[j] >= 'A' && str[j] <= 'Z') alphabet[str[j] - 'A']++;
        }
        min = MAX;
        for(int j = 0; j < 26; j++) {
            if(alphabet[j] < min) min = alphabet[j];
        }
        printf("Case %d: ", i + 1);
        switch(min) {
            case 0: printf("Not a pangram\n"); break;
            case 1: printf("Pangram!\n"); break;
            case 2: printf("Double pangram!!\n"); break;
            default: printf("Triple pangram!!!\n");
        }
    }
    return 0;
}