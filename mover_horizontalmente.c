#include <stdio.h>
/*Esta función verifica que el movimiento de una pieza hasta un punto este despejado de manera horizontal,esta función asume que la posición final esta vacia o hay una pieza enemiga a la pieza que se este desplazando.*/
int
mover_horizontalmente (char tablero[8][8], int columnai, int filai,
		       int columnaf, int filaf)
{
  int i = 0;
  char vacio = '0';
  if (columnai > columnaf) /*se mueve a la izquierda*/
    {

      vacio = tablero[filai][columnai - 1];
      i = i + 1;
      while (columnai - i != columnaf)
	{

	  if (tablero[filai][columnai - i] != vacio)
	    {
	      return 1;
	    }
	  switch (vacio)
	    {
	    case 'X':
	      vacio = ' ';
	      break;

	    case ' ':
	      vacio = 'X';
	      break;
	    }
	  i = i + 1;
	}
      return 0;
    }
  if (columnai < columnaf) /*se mueve a la derecha*/
    {

      vacio = tablero[filai][columnai + 1];
      i = i + 1;
      while (columnai + i != columnaf)
	{

	  if (tablero[filai][columnai + i] != vacio)
	    {
	      return 1;
	    }
	  switch (vacio)
	    {
	    case 'X':
	      vacio = ' ';
	      break;

	    case ' ':
	      vacio = 'X';
	      break;
	    }
	  i = i + 1;
	}
      return 0;
    }
  return 1;
}
