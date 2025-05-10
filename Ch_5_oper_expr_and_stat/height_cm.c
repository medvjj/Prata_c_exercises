#include <stdio.h>
#define CM_PER_INCH 2.54
#define INCH_PER_FEET 12.0

int
main (void)
{
  float cm, inches, inches_left;
  int feet;

  printf(" Enter height in centimeters: ");
  scanf("%f", &cm);
  while (cm > 0) {
    inches = cm / CM_PER_INCH;
    feet = inches / INCH_PER_FEET;
    inches_left = inches - feet * INCH_PER_FEET;
    printf(" %.1f cm = %d feet, %.1f inches\n", cm, feet, inches_left);
    
    printf(" Enter height in centimeters (0 or less to end): ");
    scanf("%f", &cm);
  }
  printf(" Done.\n");
  
  return 0;
}
