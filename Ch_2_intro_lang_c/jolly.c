#include <stdio.h>

void jolly(void);
void deny(void);

int
main (void)
{
  jolly();
  jolly();
  jolly();
  deny();
  return 0;
}

void jolly(void)
{
  printf("He is cheerfull fellow\n");
}

void deny(void)
{
  printf("Nobody can deny this\n");
}
