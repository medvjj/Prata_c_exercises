#include <stdio.h>

int
main (void)
{
  int n, count, sum;
  
  printf(" Enter the upper limit: ");
  scanf("%d", &n);
  count = 0;
  sum = 0;
  while (count++ < n)
    sum = sum + count;
  printf(" sum = %d\n", sum);
  
  return 0;
}
