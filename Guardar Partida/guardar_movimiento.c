#include "guardar_movimientos.h"
/*
SUGERENCIA: 
  DESCRIPCIÓN EN EL OBJETIVO DE LA FUNCIÓN Y EN LOS PARÁMETROS DE LA MISMA. :)
*/
void
guardar_mov (char a[5], int i)
{

  char partida[150][5];
  int j = 0;

  while (j < 5)
    {
      partida[i][j] = a[j];
      j = j + 1;
    }
}
