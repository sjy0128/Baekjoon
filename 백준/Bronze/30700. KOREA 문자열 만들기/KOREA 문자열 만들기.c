#include<stdio.h>
int i,a;int main(){char c,*k="KOREA";while((c=getc(stdin))!=EOF)a+=c==k[i]?1+0*(i=++i%5):0;printf("%d",a);}