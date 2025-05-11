#include<stdio.h>
int main(void){
    int X,N,s=0,i,a,b;
    scanf("%d\n%d",&X,&N);
    for(i=0;i<N;i++){
        scanf("%d %d",&a,&b);
        s+=a*b;
    }
    printf("%s",X==s?"Yes":"No");
    return 0;
}