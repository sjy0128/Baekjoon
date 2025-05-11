#include <stdio.h>

int main(void) {
    int size, i;
    scanf("%d", &size);
    for(i=0; i*i<=size; i++);
    printf("The largest square has side length %d.", i-1);
    return 0;
}