#include <stdio.h>

int main() {
    int n, i, c=0, s=0, I=0, a=0;
    char temp;
    scanf("%d\n", &n);
    for(i=0; i<n; i++) {
        scanf("%c ", &temp);
        switch(temp) {
            case 'C':
                c++;
                break;
            case 'S':
                s++;
                break;
            case 'I':
                I++;
                break;
            case 'A':
                a++;
                break;
        }
    }
    scanf("%c", &temp);
    switch(temp) {
        case 'C':
            printf("%d", c);
            break;
        case 'S':
            printf("%d", s);
            break;
        case 'I':
            printf("%d", I);
            break;
        case 'A':
            printf("%d", a);
            break;
    }
    return 0;
}