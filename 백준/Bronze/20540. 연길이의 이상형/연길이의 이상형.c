#include <stdio.h>
int main(void) {
    char ei, sn, tf, jp;
    scanf("%c%c%c%c", &ei, &sn, &tf, &jp);
    printf("%c%c%c%c", ei=='E'?'I':'E', sn=='S'?'N':'S', tf=='T'?'F':'T', jp=='J'?'P':'J');
    return 0;
}