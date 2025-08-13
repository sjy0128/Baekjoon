#include <stdio.h>

int main(void) {
    int n, m, i, j, a[500][500], s, r=0;
    scanf("%d %d", &n, &m);
    for(i=0; i<n; i++) {
        for(j=0; j<m; j++) scanf("%d", &a[i][j]);
    }
    for(i=0; i<n; i++) {
        for(j=0; j<m-3; j++) {
            s = a[i][j] + a[i][j+1] + a[i][j+2] + a[i][j+3];
            if(s > r) r = s;
        }
    }
    for(i=0; i<n-3; i++) {
        for(j=0; j<m; j++) {
            s = a[i][j] + a[i+1][j] + a[i+2][j] + a[i+3][j];
            if(s > r) r = s;
        }
    }
    for(i=0; i<n-1; i++) {
        for(j=0; j<m-1; j++) {
            s = a[i][j] + a[i][j+1] + a[i+1][j] + a[i+1][j+1];
            if(s > r) r = s;
        }
    }
    for(i=0; i<n-2; i++) {
        for(j=0; j<m-1; j++) {
            s = a[i][j] + a[i+1][j] + a[i+2][j] + a[i+2][j+1];
            if(s > r) r = s;
        }
    }
    for(i=0; i<n-1; i++) {
        for(j=0; j<m-2; j++) {
            s = a[i][j] + a[i+1][j] + a[i][j+1] + a[i][j+2];
            if(s > r) r = s;
        }
    }
    for(i=0; i<n-2; i++) {
        for(j=0; j<m-1; j++) {
            s = a[i][j] + a[i][j+1] + a[i+1][j+1] + a[i+2][j+1];
            if(s > r) r = s;
        }
    }
    for(i=0; i<n-1; i++) {
        for(j=0; j<m-2; j++) {
            s = a[i+1][j] + a[i+1][j+1] + a[i+1][j+2] + a[i][j+2];
            if(s > r) r = s;
        }
    }
    for(i=0; i<n-2; i++) {
        for(j=0; j<m-1; j++) {
            s = a[i+2][j] + a[i+2][j+1] + a[i+1][j+1] + a[i][j+1];
            if(s > r) r = s;
        }
    }
    for(i=0; i<n-1; i++) {
        for(j=0; j<m-2; j++) {
            s = a[i][j] + a[i+1][j] + a[i+1][j+1] + a[i+1][j+2];
            if(s > r) r = s;
        }
    }
    for(i=0; i<n-2; i++) {
        for(j=0; j<m-1; j++) {
            s = a[i][j] + a[i][j+1] + a[i+1][j] + a[i+2][j];
            if(s > r) r = s;
        }
    }
    for(i=0; i<n-1; i++) {
        for(j=0; j<m-2; j++) {
            s = a[i][j] + a[i][j+1] + a[i][j+2] + a[i+1][j+2];
            if(s > r) r = s;
        }
    }
    for(i=0; i<n-2; i++) {
        for(j=0; j<m-1; j++) {
            s = a[i][j] + a[i+1][j] + a[i+1][j+1] + a[i+2][j+1];
            if(s > r) r = s;
        }
    }
    for(i=0; i<n-1; i++) {
        for(j=0; j<m-2; j++) {
            s = a[i+1][j] + a[i+1][j+1] + a[i][j+1] + a[i][j+2];
            if(s > r) r = s;
        }
    }
    for(i=0; i<n-2; i++) {
        for(j=0; j<m-1; j++) {
            s = a[i][j+1] + a[i+1][j] + a[i+1][j+1] + a[i+2][j];
            if(s > r) r = s;
        }
    }
    for(i=0; i<n-1; i++) {
        for(j=0; j<m-2; j++) {
            s = a[i][j] + a[i][j+1] + a[i+1][j+1] + a[i+1][j+2];
            if(s > r) r = s;
        }
    }
    for(i=0; i<n-1; i++) {
        for(j=0; j<m-2; j++) {
            s = a[i][j] + a[i][j+1] + a[i+1][j+1] + a[i][j+2];
            if(s > r) r = s;
        }
    }
    for(i=0; i<n-2; i++) {
        for(j=0; j<m-1; j++) {
            s = a[i][j+1] + a[i+1][j] + a[i+1][j+1] + a[i+2][j+1];
            if(s > r) r = s;
        }
    }
    for(i=0; i<n-1; i++) {
        for(j=0; j<m-2; j++) {
            s = a[i+1][j] + a[i][j+1] + a[i+1][j+1] + a[i+1][j+2];
            if(s > r) r = s;
        }
    }
    for(i=0; i<n-2; i++) {
        for(j=0; j<m-1; j++) {
            s = a[i][j] + a[i+1][j] + a[i+1][j+1] + a[i+2][j];
            if(s > r) r = s;
        }
    }
    printf("%d", r);
    return 0;
}