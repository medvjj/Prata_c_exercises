#include <stdio.h>

void one_three(void);
void two(void);

int
main (void)
{
  printf(" let's start:\n");
  one_three();
  printf(" ok!\n");
  return 0;
}

void one_three(void)
{
  printf(" one\n");
  two();
  printf(" three\n");
}
void two(void)
{
  printf(" two\n");
}
