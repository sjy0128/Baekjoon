#include <stdio.h>

int main(void) {
  int w, l, h;
  scanf("%d\n%d\n%d", &w, &l, &h);
  printf((w<l?w:l)>=h*2 && (w>l?l:w)<=(w<l?w:l)*2 ? "good" : "bad");
  return 0;
}