#include <stdio.h>
void temperatures(double f);

int
main (void)
{
  double fahrenheit;
  printf(" Enter temperature in fahrenheit: ");
  while (scanf("%lf", &fahrenheit) == 1)
  {
    temperatures(fahrenheit);
  }

  printf(" Done.\n");
  
  return 0;
}
void temperatures(double f)
{
  double celsium, kelvin;
  const double coeff_1 = 5.0 / 9.0;
  const double coeff_2 = 32.0;
  const double coeff_3 = 273.16;
  celsium = coeff_1 * (f - coeff_2);
  kelvin = celsium + coeff_3;
  printf(" %.2f fahrenheit is %.2f C or %.2f K\n", f, celsium, kelvin);
  printf(" Enter temperature in fahrenheit or any letter to quit: ");
}
