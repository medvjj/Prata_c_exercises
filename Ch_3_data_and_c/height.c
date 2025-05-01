#include <stdio.h>

int
main (void)
{
  float height_cm;
  float height_inch;

  printf(" Enter your height in centimeters: ");
  scanf("%f", &height_cm);
  height_inch = height_cm / 2.54;
  printf(" your height in inches is %f\n", height_inch);
  return 0;
}
