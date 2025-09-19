#include <stdio.h>

int i=-1, l;
char s[1000];// = "((A+(B*C))-(D/E))";

void parentheses(char a, char b);
void insert(int i, char c);
void f(void);

int main(void) {
    scanf("%s", s);
    for(; s[l]!='\0'; l++);
    parentheses('*', '/');
    parentheses('+', '-');
    f();
    return 0;
}

void parentheses(char a, char b) {
    int k, x=0;
    for(int j=0; s[j]!='\0'; j++) {
        if(s[j] == a || s[j] == b) {
            if(s[j-1] >= 'A' && s[j-1] <= 'Z') insert(j-1, '(');
            else {
                k = j-1, x = 0;
                do {
                    if(s[k] == ')') x++;
                    if(s[k] == '(') x--;
                    k--;
                } while(x);
                insert(k+1, '(');
            }
            j++;
            if(s[j+1] >= 'A' && s[j+1] <= 'Z') insert(j+2, ')');
            else {
                k = j+1, x = 0;
                do {
                    if(s[k] == '(') x++;
                    if(s[k] == ')') x--;
                    k++;
                } while(x);
                insert(k, ')');
            }
            j++;
            l += 2;
        }
    }
}

void insert(int i, char c) {
    for(int j=l++; j>i; j--) s[j] = s[j-1];
    s[i] = c;
}

void f(void) {
    char c;
    i++;
    if(s[i] == '(') f();
    else printf("%c", s[i]);
    i++;
    if(s[i] == ')' || s[i] == '\0') return;
    else c = s[i];
    i++;
    if(s[i] == '(') f();
    else printf("%c", s[i]);
    i++;
    printf("%c", c);
}