#include <stdio.h>

int main() {
    int i, t=0, l=0;
    char k[6];
    for(i=0; i<9; i++) {
        scanf("%s", k);
        if(k[0] == 'T') t++;
        else l++;
    }
    printf(t > l ? "Tiger" : "Lion");
    return 0;
}