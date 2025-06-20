#include <stdio.h>

int main() {
    int w=3, dw, s=0, i, j;
    char isbn[14];
    scanf("%s", isbn);
    for(i=0; i<12; i++) {
        if(w == 3) w = 1;
        else w = 3;
        if(isbn[i] == '*') dw = w;
        else s += (isbn[i] - '0') * w;
    }
    if((s+isbn[i]-'0')%10 == 0) printf("0");
    else if(dw == 1) printf("%d", 10-(s+isbn[i]-'0')%10);
    else {
        for(j=10-(s+isbn[i]-'0')%10; j%3!=0; j+=10);
        printf("%d", j/3);
    }
    return 0;
}