#include <stdio.h>
#include <stdlib.h>

void
volado ()
{
  time_t t;
  /*Semilla para el número aleatorio */
  srand ((unsigned) time (&t));
  if ((rand () % 2) == 0)
    {
      printf ("Cara");
    }
  if ((rand () % 2) == 1)
    {
      printf ("Cruz");
    }
  return;
}
