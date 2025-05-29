#include <stdio.h>
int main(void) {
    int t, score[5]={0,}, i;
    long long int sn=0;
    scanf("%d", &t);
    for(i=0; i<t; i++) {
        scanf("%d", &score[i]);
    }
    sn += (score[0] - score[2]) * (score[0] > score[2] ? 508 : -108);
    sn += (score[1] - score[3]) * (score[1] > score[3] ? 212 : -305);
    sn += score[4] * 707;
    sn *= 4763;
    printf("%lld", sn);
    return 0;
}