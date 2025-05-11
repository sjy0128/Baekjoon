#include <stdio.h>

int main(void) {
    char word[101];
    int i;
    scanf("%s", word);
    for(i=0; word[i]!='\0'; i++);
    printf("%d", i);
    return 0;
}