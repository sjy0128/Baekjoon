#include <stdio.h>

int main(void) {
  int n, a, b, s, t;
  scanf("%d %d %d\n%d %d", &n, &a, &b, &s, &t);
  if(s>=a+1 && s<=b-1 && t>=a+1 && t<=b-1) printf("City");
  else if((s <= a && t <= a) || (s >= b && t >= b)) printf("Outside");
  else printf("Full");
  return 0;
}