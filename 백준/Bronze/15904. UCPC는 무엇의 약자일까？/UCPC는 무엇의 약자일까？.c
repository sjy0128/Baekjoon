#include<stdio.h>
int i;int main(){char c,*u="UCPC";while((c=getchar())!=-1){if(i<4&&c==u[i])i++;}printf("I %se UCPC",i==4?"lov":"hat");}