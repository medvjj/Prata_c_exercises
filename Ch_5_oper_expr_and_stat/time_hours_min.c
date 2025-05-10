#include <stdio.h>
#define MINPERHOUR 60

int
main (void)
{
  int minutes, hours, mins;
  printf(" Enter the number of minutes to convert: ");
  scanf("%d", &minutes);
  while (minutes > 0) {
    hours = minutes / MINPERHOUR;
    mins = minutes % MINPERHOUR;
    printf(" %d minutes = %d hours, %d minutes\n", minutes, hours, mins);
    printf(" Enter next minutes value (0 to quit): ");
    scanf("%d", &minutes);
  }
  printf(" Bye\n");
  
  return 0;
}
