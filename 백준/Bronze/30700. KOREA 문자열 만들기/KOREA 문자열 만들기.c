#include <stdio.h>
int i,a;
int main(){
char c,*k="KOREA";
while((c=getc(stdin))!=EOF)a+=c==k[i]?(i=++i%5)-i+1:0;
printf("%d",a);
}