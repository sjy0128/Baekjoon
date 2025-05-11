#include <stdio.h>

int main(void) {
    char word[1000001];
    int count=0;
    while(scanf("%s", word)!=EOF) count++;
    printf("%d", count);
    return 0;
}