#include <stdio.h>

int main(void) {
    int n, v, i, j, num[100000], l, q=0, t, e;
    long long st[1000];
    char cmd[100000][5];
    while(1) {
        l = 0;
        do {
            scanf("%s", cmd[l]);
            if(cmd[l][0] == 'N') {
                scanf("%d", &num[l]);
            } else if(cmd[l][0] == 'Q') {
                q = 1;
                break;
            }
        } while(cmd[l++][0] != 'E');
        if(q == 1) break;
        scanf("%d", &n);
        for(i=0; i<n; i++) {
            t = 0;
            e = 0;
            scanf("%lld", &st[t++]);
            for(j=0; j<l-1; j++) {
                if(cmd[j][0] == 'N') {
                    st[t] = num[j];
                    t++;
                } else if(cmd[j][0] == 'P') {
                    if(t == 0) {
                        e = 1;
                        break;
                    }
                    t--;
                } else if(cmd[j][0] == 'I') {
                    if(t == 0) {
                        e = 1;
                        break;
                    }
                    st[t-1] = -st[t-1];
                } else if(cmd[j][0] == 'D' && cmd[j][1] == 'U') {
                    if(t == 0) {
                        e = 1;
                        break;
                    }
                    st[t] = st[t-1];
                    t++;
                } else {
                    if(t <= 1) {
                        e = 1;
                        break;
                    }
                    switch(cmd[j][0]) {
                        case 'D':
                            if(st[t-1] == 0) {
                                e = 1;
                            } else {
                                t--;
                                st[t-1] /= st[t];
                            }
                            break;
                        case 'S':
                            if(cmd[j][1] == 'W') {
                                st[t-1] ^= st[t-2];
                                st[t-2] ^= st[t-1];
                                st[t-1] ^= st[t-2];
                            } else {
                                t--;
                                st[t-1] -= st[t];
                            }
                            break;
                        case 'A':
                            t--;
                            st[t-1] += st[t];
                            break;
                        case 'M':
                            if(cmd[j][1] == 'U') {
                                t--;
                                st[t-1] *= st[t];
                            } else {
                                if(st[t-1] == 0) {
                                    e = 1;
                                } else {
                                    t--;
                                    st[t-1] %= st[t];
                                }
                            }
                    }
                }
                if(t && (st[t-1] < -1000000000 || st[t-1] > 1000000000) || e) {
                    e = 1;
                    break;
                }
            }
            if(e || t != 1) {
                printf("ERROR\n");
            } else {
                printf("%lld\n", st[0]);
            }
        }
        printf("\n");
    }
    return 0;
}