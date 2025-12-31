#include <stdio.h>
#define MAX 1001

int _strlen(const char *str);
int sum(const char *str, int s, int e);

int main(void) {
    int len;
    char str[MAX];
    scanf("%s", str);
    len = _strlen(str);
    for(int i = len - len % 2; i >= 2; i -= 2) {
        for(int j = 0; j < len - i + 1; j++) {
            if(sum(str, j, j + i / 2 - 1) == sum(str, j + i / 2 , j + i - 1)) {
                printf("%d", i);
                return 0;
            }
        }
    }
}

int _strlen(const char *str) {
    int r = 0;
    while(str[r]) r++;
    return r;
}

int sum(const char *str, int s, int e) {
    int r = 0;
    for(int i = s; i <= e; i++) r += str[i] - '0';
    return r;
}