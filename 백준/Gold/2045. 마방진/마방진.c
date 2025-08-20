#include <stdio.h>

int main(void) {
    int ms[3][3], zc=0, s=0, t[3]={0,}, m=0, n=0, z;
    for(int i=0; i<3; i++) {
        for(int j=0; j<3; j++) {
            scanf("%d", &ms[i][j]);
            if(!ms[i][j]) zc++;
        }
    }
    if(!ms[0][0] && !ms[1][1] && !ms[2][2] || !ms[2][0] && !ms[1][1] && !ms[0][2]) {
        for(int i=0; i<3; i++) {
            for(int j=0; j<3; j++) {
                t[i] += ms[i][j];
            }
            if(t[i] > m) m = t[i];
            n += t[i];
        }
        m = m*3-n;
        while(n+m != m*3) {
            m += 1;
        }
        for(int i=0; i<3; i++) {
            for(int j=0; j<3; j++) {
                if(!ms[i][j]) ms[i][j] = m -  t[i];
            }
        }
    } else {
        if(zc == 3) {
            if(ms[0][0] && ms[1][1] && ms[2][2]) s = ms[0][0] + ms[1][1] + ms[2][2];
            else if(ms[2][0] && ms[1][1] && ms[0][2]) s = ms[2][0] + ms[1][1] + ms[0][2];
        }
        while(zc) {
            for(int i=0; i<3; i++) {
                n = z = 0;
                for(int j=0; j<3; j++) {
                    n += ms[i][j];
                    if(!ms[i][j]) z++;
                }
                if(!z) s = n;
                if(s && z == 1) {
                    for(int j=0; j<3; j++) {
                        if(!ms[i][j]) ms[i][j] = s - n;
                    }
                    zc--;
                }
            }
            for(int i=0; i<3; i++) {
                n = z = 0;
                for(int j=0; j<3; j++) {
                    n += ms[j][i];
                    if(!ms[j][i]) z++;
                }
                if(!z) s = n;
                if(s && z == 1) {
                    for(int j=0; j<3; j++) {
                        if(!ms[j][i]) ms[j][i] = s - n;
                    }
                    zc--;
                }
            }
        }
    }
    for(int i=0; i<3; i++) {
        for(int j=0; j<3; j++) printf("%d ", ms[i][j]);
        printf("\n");
    }
    return 0;
}