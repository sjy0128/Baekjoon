#include <stdio.h>
int main(void) {
    int n, temp, pos=0;
    scanf("%d", &n);
    for(int i=0; i<n; i++) {
        scanf("%d", &temp);
        pos += temp;
    }
    printf(pos == 0 ? "Stay" : (pos > 0 ? "Right" : "Left"));
    return 0;
}