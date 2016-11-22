#include <stdio.h>

void
otra_funcion (void)
{
  char tablero[9][9];
  int i = 0;
  int j = 0;
  for (i = 0; i < 10; i = i + 1)
    {
      tablero[i][j]='*';
      printf("%c",tablero[i][j]);
      tablero[i][9] = '*';
      
      
    }

  while (j < 10)
    {
      tablero[i][j] = '*';
      tablero[9][j] = '*';
      j = j + 1;
    }

}
