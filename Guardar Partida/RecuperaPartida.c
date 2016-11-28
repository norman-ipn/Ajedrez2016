/* Devuelve 1 si se lee correctamente, 0 en otro caso. Si no habia partida anterior, el tablero no se modifica */

#include <stdio.h>

int
RecuperaPartida (char tablero[8][8])
{
  FILE *fp = fopen ("tablero.tab", "r");
  int resultado = 0;
  if (fp == 0)
    {
      return 0;
    }
  else
    {
      resultado = fread (tablero, sizeof (char), 64, fp);
      fclose (fp);
      if (resultado == 64)
	{
	  return 1;
	}
      else
	{
	  return 0;
	}
    }
}
