#include<stdio.h>
#include<stdlib.h>

int
MoverRey (char tablero[8][8], int x_inicial, int y_inicial, int x_final, int y_final);

int
comprobar_casilla (char tablero[8][8], int x_inicial, int y_inicial,
		   int x_final, int y_final);

int
comprobar_casilla (char tablero[8][8], int x_inicial, int y_inicial, int x_final, int y_final)
{
  int n = 1;			/* contador de y */
  int m = 1;			/* contador de x */
    while (m >= -1)
    {
      n = 1;
      while (n >= -1)
	{
	  if (((x_inicial + m) == (x_final))
	      && ((x_inicial + n) == (x_final)))
	    {
	      if (tablero[x_final][y_final] == '0')
		{
		  return 1;
		}
	       else
		{
	         return 0;
                }
	    }

	  n = n - 1;
	}
    m = m - 1;}
  return 0;
}

int
MoverRey (char tablero[8][8], int x_inicial, int y_inicial, int x_final,
	  int y_final)
{
  int estado = 1;

  switch (estado)
        {
	 case 0: return 0;
         case 1: return 1; break; 
        }
  return 0;			/* no es posible */
}
