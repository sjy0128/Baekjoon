#include <stdio.h>
#include <stdlib.h>
#define MAX 100

int n, m, h, s, e, t, c;
short a[MAX][MAX][MAX];
short qu[MAX*MAX*MAX][3];

void enqueue(int x, int y, int z);
void process(int x, int y, int z);
void ripe(int x, int y, int z);
int judge(int x, int y, int z);
int inOfRange(int x, int y, int z);

int main(void) {
    int temp, x, y, z;
    scanf("%d %d %d", &n, &m, &h);
    for(int i=0; i<h; i++) {
        for(int j=0; j<m; j++) {
            for(int k=0; k<n; k++) {
                scanf("%hd", &a[j][k][i]);
                if(!a[j][k][i]) t++;
                if(a[j][k][i] == 1) enqueue(j, k, i);
            }
        }
    }
    while(s < e) {
        if(!t) break;
        temp = e;
        for(int i=s; i<temp; i++) {
            x = qu[i][0], y = qu[i][1], z = qu[i][2];
            process(x, y, z+1);
            process(x-1, y, z);
            process(x, y-1, z);
            process(x, y+1, z);
            process(x+1, y, z);
            process(x, y, z-1);
        }
        s = temp;
        c++;
    }
    printf("%d", !t ? c : -1);
    return 0;
}

void enqueue(int x, int y, int z) {
    qu[e][0] = x;
    qu[e][1] = y;
    qu[e][2] = z;
    e++;
}

void process(int x, int y, int z) {
    if(judge(x, y, z)) ripe(x, y, z);
}

void ripe(int x, int y, int z) {
    a[x][y][z] = 1;
    t--;
    enqueue(x, y, z);
}

int judge(int x, int y, int z) {
    return inOfRange(x, y, z) && !a[x][y][z];
}

int inOfRange(int x, int y, int z) {
    return x >= 0 && x < m && y >= 0 && y < n && z >= 0 && z < h;
}