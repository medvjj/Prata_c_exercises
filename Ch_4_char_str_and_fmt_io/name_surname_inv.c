#include <stdio.h>

int
main (void)
{
  char fname[40];
  char lname[40];
  
  printf(" Enter your first name: ");
  scanf("%s", fname);
  printf(" Enter your last name: ");
  scanf("%s", lname);
  printf(" Your last name is %s\n", lname);
  printf(" Your first name is %s\n", fname);
  return 0;
}
