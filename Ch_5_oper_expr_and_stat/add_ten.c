#include <stdio.h>

int
main (void)
{
  int num, i;
  printf(" Enter integer number: ");
  scanf("%d", &num);
  printf(" You entered %d\n", num);
  printf(" Next ten numbers are: ");
  for (i = 0; i < 10; i++) {
    printf(" %d", num + 1 + i);
  }
  printf("\n");
  
  return 0;
}
