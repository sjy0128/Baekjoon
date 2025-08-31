#include <stdio.h>

int main(void) {
    int a[1000000]={0,}, c=0;
    long long min, max, b[1000001]={0,}, k;
    scanf("%lld %lld", &min, &max);
    for(int i=2; i<=1000; i++) {
        if(!a[i-1]) {
            for(int j=i*2; j+i<1000000; j+=i) a[j-1]=1;
        }
    }
    for(long long i=2; i<=1000000; i++) {
        if(!a[i-1]) {
            k=min;
            if(k%(i*i)) k+=(i*i-(min%(i*i)));
            while(1) {
                if(k>max) break;
                b[k-min] = 1;
                k += i*i;
            }
        }
    }
    for(int i=0; i<=max-min; i++) {
        if(!b[i]) c++;
    }
    printf("%d", c);
    return 0;
}