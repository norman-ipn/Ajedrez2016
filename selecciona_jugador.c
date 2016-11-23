#include <stdlib.h>
#include <time.h>

int
empieza_jugador ()
{
  srand (time (NULL));
  int empiezajugador = 1;
  int num = 0;
  num = rand ();
  if (num %= 2)
    {
      empiezajugador = 2;
    }
  return empiezajugador;
}

