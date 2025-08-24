#include <stdio.h>

int main(void) {
  long long a;
  scanf("%lld", &a);
  printf((a <= 3 ? a%2 : !((a-4)%5%2)) ? "SK" : "CY");
  return 0;
}