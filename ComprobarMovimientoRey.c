/*No entiendo, que hace esta funcion?*/

#include "ComprobarMovimientoRey.h"
/* comprueba que el movimiento se realice dentro del parametro de movimiento del rey suponiendo que '0' es una casilla vacia*/
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

/* regresa 1 si el movimiento es valido y 0 si el movimiento es invalido */

int
ComprobarMovimientoRey (char tablero[8][8], int x_inicial, int y_inicial, int x_final,
	  int y_final)
{
  int estado = 0;
	
  estado = comprobar_casilla( tablero, x_inicial, y_inicial, x_final, y_final);
   
   switch (estado)
        {
	 case 0: return 0; break;
         case 1: return 1; break; 
        }
  estado = comprobar_jaque( tablero,x_final, y_final);
   
   switch (estado)
        {
	 case 0: return 0; break;
         case 1: return 1; break; 
        }
  return 0;			
}
