#include <stdio.h>
#define MAX 101

int main(void) {
    int cnt = 0;
    char str[MAX], cal[][3] = {"c=", "c-", "d-", "lj", "nj", "s=", "z="};
    scanf("%s", str);
    for(int i = 0; str[i]; i++, cnt++) {
        if(str[i] < 'a' || str[i] > 'z') {
            cnt--;
            continue;
        }
        if(str[i + 1]) {
            if(str[i + 2] && str[i] == 'd' && str[i + 1] == 'z' && str[i + 2] == '=') i += 2;
            else {
                for(int j = 0; j < 7; j++) {
                    if(str[i] == cal[j][0] && str[i + 1] == cal[j][1]) {
                        i++;
                        continue;
                    }
                }
            }
        }
    }
    printf("%d", cnt);
    return 0;
}