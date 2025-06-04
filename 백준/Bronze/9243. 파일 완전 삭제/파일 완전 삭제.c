#include <stdio.h>

int main(void) {
    int n, i;
    char b1[1001], b2[1001];
    scanf("%d\n%s\n%s", &n, b1, b2);
    for(i=0; b1[i]!='\0'; i++) {
        if(n % 2 == 1) {
            if(b1[i]==b2[i]) {
                printf("Deletion failed");
                return 0;
            }
        } else {
            if(b1[i]!=b2[i]) {
                printf("Deletion failed");
                return 0;
            }
        }
    }
    printf("Deletion succeeded");
    return 0;
}