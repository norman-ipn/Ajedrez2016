#include <stdio.h>
#define cyan  "\x1b[36m"
#define parar "\x1b[0m"
void
main (void)
{
  char tablero[9][9];
  int i = 0;
  int j = 0;
  int e = 0;
/*Contorno con respecto a las X de la parte superior*/
  for (i = 0; i <= 9; i = i + 1)
    {
      tablero[i][j] = '*';
      printf (" ");
      printf (cyan "%c" parar, tablero[i][j]);
    }
/*Contorno con respecto a las Y lado izquierdo*/  
  printf ("\n");
  i = 0;
  while (j < 8)
    {
      printf (" ");
      tablero[9][j] = '*';
      printf (cyan "%c" parar, tablero[9][j]);
    
/*Espacios para el contorno con respecto de las Y*/
      while (e < 17)
	{
	  printf (" ");
	  e = e + 1;
	}
      e = 0;
/*Contorno con respecto a las Y lado derecho*/
      tablero[i][j] = '*';
      printf (cyan "%c \n" parar, tablero[i][j]);
      j = j + 1;
    }
/*Contorno con respecto a las X de la parte inferior*/
  i = 0;
  for (i = 0; i <= 9; i = i + 1)
    {
      tablero[i][8] = '*';
      printf (" ");
      printf (cyan "%c" parar, tablero[i][8]);
    }
/*-----------------------------------*/
  printf ("\n");
}
