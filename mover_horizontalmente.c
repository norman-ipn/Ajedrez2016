#include <stdio.h>
/*La funcion ya fue creada, se llama "valdiar_movimiento_lineal"*/  /*Regrese a la función original para hacerla general y que funcione con cualquier caracvter que sea designado cono casilla negra y blanca, la función mover_lineal progrongo que la cambiemos por esta y otra funcion que sea mover  vertical ya que esta funciona para cualquier caracter y segun yo comprueba de mejor forma*/
/*Esta función verifica que el movimiento de una pieza hasta un punto este despejado de manera horizontal,esta función asume que la posición final esta vacia o hay una pieza enemiga a la pieza que se este desplazando.*/
int
mover_horizontalmente (char tablero[8][8], int columnai, int filai,
                       int columnaf, int filaf, char negra, char blanca)
{
  int i = 0;
  int control = 0;
  char vacio = '0';
  if (columnai > columnaf)      /*se mueve a la izquierda */
    {
      vacio = tablero[filai][columnai - 1];
      if (vacio == negra)
        {
          control = 0;
        }
      else
        {
          control = 1;
        }
      i = i + 1;
      while (columnai - i != columnaf)
       {
          if (tablero[filai][columnai - i] != vacio)
            {
              return 1;
            }
          switch (control)
            {
            case 0:
              vacio = blanca;
              control = 1;
              break;

            case 1:
              vacio = negra;
              control = 0;
              break;
            }
          i = i + 1;
        }
      return 0;
    }
  if (columnai < columnaf)      /*se mueve a la derecha */
    {
      vacio = tablero[filai][columnai + 1];
      if (vacio == negra)
        {
          control = 0;
        }
      else
        {
          control = 1;
        }
      i = i + 1;
      while (columnai + i != columnaf)
        {
          if (tablero[filai][columnai + i] != vacio)
            {
              return 1;
            }
          switch (control)
            {
            case 0:
              control = 1;
              vacio = blanca;
              break;

            case 1:
              control = 0;
              vacio = negra;
              break;
            }
          i = i + 1;
        }
      return 0;
    }
  return 1;
}

