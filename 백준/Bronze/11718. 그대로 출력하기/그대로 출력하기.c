#include <stdio.h>

int main() {
    char i[101];
    while(scanf("%[^\n]\n", i) != EOF) printf("%s\n", i);
    return 0;
}