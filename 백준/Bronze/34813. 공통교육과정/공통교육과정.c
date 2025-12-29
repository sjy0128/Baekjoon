#include <stdio.h>

int main(void) {
    char c;
    scanf("%c", &c);
    switch(c) {
        case 'F':
            printf("Foundation");
            break;
        case 'C':
            printf("Claves");
            break;
        case 'V':
            printf("Veritas");
            break;
        case 'E':
            printf("Exploration");
            break;
    }
    return 0;
}