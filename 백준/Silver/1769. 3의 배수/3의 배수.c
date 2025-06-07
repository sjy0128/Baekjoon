#include <stdio.h>
int main() {
    int i=0, j=0, sum=0;
    char num[1000001];
    scanf("%s", num);
    for(j=0; num[j]!='\0'; j++) sum += num[j] - '0';
    if(j > 1) i=1;
    while(sum >= 10) for(i++, j=sum, sum=0; j>0; sum+=j%10, j/=10);
    printf("%d\n%s", i, sum % 3 == 0 ? "YES" : "NO");
    return 0;
}