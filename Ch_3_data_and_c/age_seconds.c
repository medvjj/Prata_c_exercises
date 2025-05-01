#include <stdio.h>

int
main (void)
{
  int age;
  printf(" Enter age in years: ");
  scanf("%d", &age);
  printf(" Your age in seconds is %e seconds\n", age * 3.156e+7);
  printf(" Your age in seconds is %f seconds\n", age * 3.156e+7);
  return 0;
}
