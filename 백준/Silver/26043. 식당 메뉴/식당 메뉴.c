#include <stdio.h>
#include <stdlib.h>

int main(void) {
    int n, i, j, c, b, s=0, e=-1, Am=500001, Bm=500001;
    scanf("%d", &n);
    int *A = (int *)calloc(n, sizeof(int));
    int *B = (int *)calloc(n, sizeof(int));
    int *C = (int *)calloc(n, sizeof(int));
    int **S = (int **)malloc(sizeof(int*)*2);
    S[0] = (int *)malloc(sizeof(int)*n);
    S[1] = (int *)malloc(sizeof(int)*n);
    for(i=0; i<n; i++) {
        scanf("%d", &c);
        if(c == 1) {
            e++;
            scanf("%d %d", &S[0][e], &S[1][e]);
            C[S[0][e]-1]++;
        } else {
            scanf("%d", &b);
            C[S[0][s]-1]--;
            if(S[1][s] != b) {
                if(S[0][s]-1 < Bm) Bm = S[0][s]-1;
                B[S[0][s]-1]++;
            } else {
                if(S[0][s]-1 < Am) Am = S[0][s]-1;
                A[S[0][s]-1]++;
            }
            s++;
        }
    }
    free(S[0]);
    free(S[1]);
    if(Am != 500001) {
        for(i=Am; i<n; i++) {
            for(j=0; j<A[i]; j++) printf("%d ", i+1);
        }
    } else printf("None");
    printf("\n");
    free(A);
    if(Bm != 500001) {
        for(i=Bm; i<n; i++) {
            for(j=0; j<B[i]; j++) printf("%d ", i+1);
        }
    } else printf("None");
    printf("\n");
    free(B);
    if(s <= e) {
        for(i=0; i<n; i++) {
            for(j=0; j<C[i]; j++) printf("%d ", i+1);
        }
    } else printf("None");
    free(C);
    return 0;
}