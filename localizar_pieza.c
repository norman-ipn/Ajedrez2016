/* Esta funcion recibe como parametro, el tablero, la pieza que buscamos,
   dos apuntadores para devolver la coordenada donde se encuentra la pieza */
/* Asumire que tablero esta indexado de 0 a 7 */

void
localizar_pieza (char tablero[8][8], char pieza, int *x, int *y)
{
  int i = 0;
  int j = 0;
  while (i < 8)
    {
      while (j < 8)
	    {
	      if (tablero[i][j] == pieza)
	        {
	          *x = i;
	          *y = j;
	        }
	      j = j + 1;
	    }
	  i = i +1;
    }
}
