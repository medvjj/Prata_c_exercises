#include <stdio.h>

int
main (void)
{
  int num, i;
  
  printf(" Enter integer number: ");
  scanf("%d", &num);
  printf(" You entered %d\n", num);
  printf(" Next ten numbers are: ");
  i = num;
  
  while (num++ < (i + 10)) {
    printf(" %d", num);
  }
  printf("\n");
  
  return 0;
}
