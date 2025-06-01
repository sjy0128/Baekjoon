#include <stdio.h>
int main(void) {
    int b, i, p;
    char ti[3][13] = {"Watermelon", "Pomegranates", "Nuts"};
    scanf("%d", &b);
    for(i=0; i<3; i++) {
        scanf("%d", &p);
        if(p <= b) {
            printf("%s", ti[i]);
            return 0;
        }
    }
    printf("Nothing");
    return 0;
}