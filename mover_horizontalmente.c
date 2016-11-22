#include <stdio.h>
/*La funcion ya fue creada, se llama "valdiar_movimiento_lineal"*/
/*Esta función verifica que el movimiento de una pieza hasta un punto este despejado de manera horizontal,esta función asume que la posición final esta vacia o hay una pieza enemiga a la pieza que se este desplazando.*/
int
mover_horizontalmente (char tablero[8][8], int coodenadas_iniciales[2],
		       int coodenadas_finales[2])
{
  int i = 0;
  char vacio = '0';
  if (coodenadas_iniciales[0] > coodenadas_finales[0])	/*se mueve a la izquierda */
    {

      vacio = tablero[filai][coodenadas_iniciales[0] - 1];
      i = i + 1;
      while (coordenadas_iniciales[0] - i != coodenadas_finales[0])
	{

	  if (tablero[coodenadas_iniciales[1]][coodenadas_iniciales[0] - i] !=
	      vacio)
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
  if (coodenadas_iniciales[0] < coodenadas_finales[0])	/*se mueve a la derecha */
    {

      vacio = tablero[filai][coodenadas_iniciales[0] + 1];
      i = i + 1;
      while (coodenadas_iniciales[0] + i != coodenadas_finales[0])
	{

	  if (tablero[coodenadas_iniciales[1]][coodenadas_iniciales[0] + i] !=
	      vacio)
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
