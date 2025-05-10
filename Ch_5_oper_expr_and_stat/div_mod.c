#include <stdio.h>

int
main (void)
{
  int divnum, modulo;
  
  printf(" This program calculates the results of division by modulo.\n");
  printf(" Enter an integer that will be the second operand.: ");
  scanf("%d", &modulo);
  printf(" Now enter the first operand: ");
  scanf("%d", &divnum);
  printf(" %d %% %d equals %d\n", divnum, modulo, divnum % modulo);

  while (divnum > 0) {
    printf(" Enter next number for first operand (0 or less to end): ");
    scanf("%d", &divnum);
    if (divnum > 0)
      printf(" %d %% %d equals %d\n", divnum, modulo, divnum % modulo);
  }

  printf(" Done.\n");    

  return 0;
}
