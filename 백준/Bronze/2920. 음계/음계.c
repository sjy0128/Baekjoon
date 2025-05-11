#include <stdio.h>

int main(void) {
    int temp, p;
    for(int i=1; i<=8; i++) {
        scanf("%d", &temp);
        if(i == 1) {
            p = temp == 1 ? 1 : 2;
        }
        if(temp != (p == 1 ? i : 9-i)) {
            p = 3;
            break;
        }
    }
    printf("%s", p == 1 ? "ascending" : (p == 2 ? "descending" : "mixed"));
    
    return 0;
}