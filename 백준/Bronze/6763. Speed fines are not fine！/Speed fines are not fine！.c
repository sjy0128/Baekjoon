#include <stdio.h>

int main(void) {
    int limit, speed, over;
    scanf("%d\n%d", &limit, &speed);
    over = speed - limit;
    if(over > 0) {
        int fine;
        if(over >= 31) fine = 500;
        else if(over >= 21) fine = 270;
        else fine = 100;
        printf("You are speeding and your fine is $%d.", fine);
    } else printf("Congratulations, you are within the speed limit!");
    return 0;
}