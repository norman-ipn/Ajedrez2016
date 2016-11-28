/*
FUNCIÓN QUE ABRE UNA PARTIDA PREVIAMENTE GUARDADA.
*/

#include <stdio.h>
void
continuar_partida (char archivo[100])
{

  FILE *tablerop = 0;
  char tablero[8][8];

  size_t n = 0;

  tablerop = fopen (tablero.tab, "r");
  if (fp == 0)
    {
      printf ("No se pudo abrir el archivo");
    }

  n = fread (tablero, sizeof (char), 64, tablerop);
  if (n == 64)
    {
      printf ("Se leyeron los datos correctamente");
    }

  fclose (tablerop);
}
