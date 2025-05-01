#include <stdio.h>

int
main (void)
{
  float num;
  printf(" Enter floating-point number: ");
  scanf("%f", &num);
  printf(" You entered %.1f or %.1e\n", num, num);
  printf(" You entered %+.3f or %.3E\n", num, num);
  return 0;
}
