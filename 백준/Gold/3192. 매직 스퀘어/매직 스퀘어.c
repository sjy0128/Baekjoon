#include <stdio.h>

int main(void) {
    int a[3][3], zc=0, s=0, ze, m, w[3]={0,}, p=0, x[3]={0,}, xx[3]={0,}, y;
    for(int i=0; i<3; i++) {
        for(int j=0; j<3; j++) {
            scanf("%d", &a[i][j]);
            if(!a[i][j]) zc++;
        }
    }
    if(!a[0][0] && !a[1][1] && !a[2][2] || !a[2][0] && !a[1][1] && !a[0][2]) {
        for(int i=0; i<3; i++) {
            for(int j=0; j<3; j++) w[i] += a[i][j];
            s += w[i];
            if(!i || w[i] > m) m = w[i];
        }
        m++;
        s = m*3-s;
        while(m != s) {
            s += 3;
            m++;
        }
        for(int i=0; i<3; i++) {
            for(int j=0; j<3; j++) {
                if(!a[i][j]) {
                    a[i][j] = m - w[i];
                }
            }
        }
    } else {
        if(a[0][0] && a[1][1] && a[2][2]) s = a[0][0] + a[1][1] + a[2][2];
        if(a[2][0] && a[1][1] && a[0][2]) s = a[2][0] + a[1][1] + a[0][2];
        while(zc) {
            for(int i=0; i<3; i++) {
                y = 0;
                ze = 0;
                for(int j=0; j<3; j++) {
                    if(!a[i][j]) ze++;
                    y += a[i][j];
                }
                if(!ze) s = y;
                if(ze == 1 && s) {
                    for(int j=0; j<3; j++) {
                        if(!a[i][j]) {
                            a[i][j] = s - y;
                            zc--;
                            break;
                        }
                    }
                }
            }
            for(int i=0; i<3; i++) {
                y = 0;
                ze = 0;
                for(int j=0; j<3; j++) {
                    if(!a[j][i]) ze++;
                    y += a[j][i];
                }
                if(!ze) s = y;
                if(ze == 1 && s) {
                    for(int j=0; j<3; j++) {
                        if(!a[j][i]) {
                            a[j][i] = s - y;
                            zc--;
                            break;
                        }
                    }
                }
            }
        }
    }
    for(int i=0; i<3; i++) {
        for(int j=0; j<3; j++) {
            printf("%d ", a[i][j]);
        }
        printf("\n");
    }
    return 0;
}