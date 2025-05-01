#include <stdio.h>

int
main (void)
{
  float cups;
  printf(" Enter number of cups: ");
  scanf("%f", &cups);
  printf(" %.2f cups = %.2f pints\n", cups, cups / 2);
  printf(" %.2f cups = %.2f ounces\n", cups, cups * 8);
  printf(" %.2f cups = %.2f tablespoons\n", cups, cups * 8 * 2);
  printf(" %.2f cups = %.2f teaspoons\n", cups, cups * 8 * 2 * 3);
  return 0;
}
