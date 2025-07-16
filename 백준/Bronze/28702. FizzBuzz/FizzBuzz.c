#include <stdio.h>

int main() {
    int i, fb=0;
    char fbc[9];
    for(i=0; i<3; i++) {
        scanf("%d", &fb);
        if(fb != 0) break;
        else scanf("%s", fbc);
    }
    fb += 3-i;
    if(fb % 3 == 0 && fb % 5 == 0) printf("FizzBuzz");
    else if(fb % 3 == 0) printf("Fizz");
    else if(fb % 5 == 0) printf("Buzz");
    else printf("%d", fb);
    return 0;
}