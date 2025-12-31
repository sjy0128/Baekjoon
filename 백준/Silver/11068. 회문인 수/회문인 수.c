#include <stdio.h>

void changeBase(int *data, int origin_base, int base);
int isPalindrome(int *data);

int main(void) {
    int t, d[31], e;
    char str[8];
    scanf("%d", &t);
    while(t--) {
        e = 0;
        scanf("%s", str);
        for(int i = 0; str[i]; i++) d[i] = str[i] - '0', d[i + 1] = -1;
        for(int i = 2; i <= 64; i++) {
            changeBase(d, i != 2 ? i - 1 : 10, i);
            if(isPalindrome(d)) {
                e = 1;
                break;
            }
        }
        printf("%d\n", e);
    }
    return 0;
}

void changeBase(int *data, int origin_base, int base) {
    int demical = 0, len;
    for(int i = 0; data[i] != -1; i++) demical = demical * origin_base + data[i];
    for(len = 0; demical; demical /= base, len++) data[len] = demical % base;
    data[len] = -1;
    for(int i = 0; i < len / 2; i++)
        data[i] ^= data[len - i - 1] ^= data[i] ^= data[len - i - 1];
}

int isPalindrome(int *data) {
    int len;
    for(len = 0; data[len] != -1; len++);
    for(int i = 0; i < len / 2; i++) {
        if(data[i] != data[len - i - 1]) return 0;
    }
    return 1;
}