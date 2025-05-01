#include <stdio.h>

int
main (void)
{
  float mass_mol = 3.0e-23;
  float mass_qt = 950;
  float quarts;
  float molecules;

  printf(" Enter the number of quarts of water: ");
  scanf("%f", &quarts);
  molecules = mass_qt * quarts / mass_mol;
  printf(" %f quarts of water contains %f molecules\n", quarts, molecules);
  printf(" %f quarts of water contains %e molecules\n", quarts, molecules);
  return 0;
}
