#include <stdio.h>
#define KM_PER_MILE 1.609
#define LITRES_PER_GALLON 3.785

int
main (void)
{
  float miles, gas;
  
  printf(" Enter number of miles and number of gas (in gallons):");
  scanf("%f, %f", &miles, &gas);
  printf(" At one gallon of gas you passed %.1f miles\n", miles / gas);
  printf(" For EU users: at one litre of gas you passed %.1f km\n", miles * KM_PER_MILE / (gas * LITRES_PER_GALLON));
  printf(" For EU users: for 100 km you spent %.1f litres of gas\n", gas * LITRES_PER_GALLON * 100 / (miles * KM_PER_MILE)); 

  return 0;
}
