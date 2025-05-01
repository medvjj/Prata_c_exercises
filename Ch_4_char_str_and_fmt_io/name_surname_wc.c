#include <stdio.h>
#include <string.h>

int
main (void)

{
  char fname[40], sname[40];
//  int a, b;

  printf(" Enter your first name: ");
  scanf("%s", fname);
  printf(" Enter your second name: ");
  scanf("%s", sname);
  printf(" %s %s\n", fname, sname);
  printf(" %*d %*d\n", (int)strlen(fname), (int)strlen(fname), (int)strlen(sname), (int)strlen(sname));
  printf(" %s %s\n", fname, sname);
  printf(" %-*d %-*d\n", (int)strlen(fname), (int)strlen(fname), (int)strlen(sname), (int)strlen(sname));
  
  return 0;
}
