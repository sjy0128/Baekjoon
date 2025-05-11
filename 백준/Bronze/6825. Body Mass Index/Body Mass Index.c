#include <stdio.h>

int main(void) {
    float w, h, bmi;
    scanf("%f\n%f", &w, &h);
    bmi = w/(h*h);
    printf("%s", bmi > 25 ? "Overweight" : (bmi < 18.5 ? "Underweight" : "Normal weight"));
    
    return 0;
}