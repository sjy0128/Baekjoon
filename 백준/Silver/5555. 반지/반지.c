#include <stdio.h>

int main(void) {
    int n, len_find, count = 0, is_include;
    char find[11], yubiwa[11];
    scanf("%s\n%d", find, &n);
    for(len_find = 0; find[len_find]; len_find++);
    while(n--) {
        scanf("%s", yubiwa);
        for(int i = 0; i < 10; i++) {
            is_include = 1;
            for(int j = 0; j < len_find; j++) {
                if(find[j] != yubiwa[(i + j) % 10]) is_include = 0;
            }
            if(is_include) break;
        }
        if(is_include) count++;
    }
    printf("%d", count);
    return 0;
}