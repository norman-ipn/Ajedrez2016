#include <stdio.h>
int
revisar_coordenada (int pos_i_x, int pos_i_y, char tablero[8][8])
{
  /* Para poder saber si esta vacia la casilla se tiene que saber el char 
     que esta en la posicion que se quiere revisar. 
     Supongamos que 0 = negras, 1 = blancas.
     Para poder comparar si esta o no ocupada hacemos un cast */
 int resultado = 1;
  if (((int) tablero[pos_i_x][pos_i_y]) > 1)
    {
      resultado = -1;
    }
  return resultado;
}

char
ver_pieza (int pos_i_x, int pos_i_y, int pos_f_x, int pos_f_y,
	   char tablero[8][8])
{
  /* Aqui se necesita saber el color las fichas  del que tira la 
     jugada y tambien el color de las fichas del enemigo.
     Supongamos que las fichas negras son en mayusculas y las 
     blancas son en minusculas. Para jugador, b = blancas, n = 
     negras, v = vacio. */
  char jugador;
  if (((int) tablero[pos_i_x][pos_i_y]) >= 65
      && ((int) tablero[pos_i_x][pos_i_y]) <= 90)
    {
      jugador = 'n';
    }
  else if (((int) tablero[pos_i_x][pos_i_y]) >= 97
	   && ((int) tablero[pos_i_x][pos_i_y]) <= 122)
    {
      judador = 'b';
    }
  else
    {
      jugador = 'v';
    }
  return jugador;
}

int
ver_coordenada (int pos_i_x, int pos_i_y, int pos_f_x, int pos_f_y)
{
  int resultado = 0;
  if ((x_i + 1 == x_f) && (y_i + 2 == x_f))
    {
      resultado = 1;
    }
  else if ((x_i - 1 == x_f) && (y_i + 2 == y_f))
    {
      resultado = 1;
    }
  else if ((x_i - 2 == x_f) && (y_i + 1 == y_f))
    {
      resultado = 1;
    }
  else if ((x_i - 2 == x_f) && (y_i - 1 == y_f))
    {
      resultado = 1;
    }
  else if ((x_i - 1 == x_f) && (y_i - 2 == y_f))
    {
      resultado = 1;
    }
  else if ((x_i + 1 == x_f) && (y_i - 2 == y_f))
    {
      resultado = 1;
    }
  else if ((x_i + 2 == x_f) && (y_i + 1 == y_f))
    {
      resultado = 1;
    }
  else if ((x_i + 2 == x_f) && (y_i - 1 == y_f))
    {
      resultado = 1;
    }
  else
    {
      resultado = -1;
    }
  return resultado;
}

int
validar_movimiento_caballo (int pos_i_x, int pos_i_y, int pos_f_y,
			    int pos_f_x, char tablero[8][8])
{
  /* pos_i=Posicion inicial. pos_f=Posicion final.
     Para todas las afirmaciones se usara un 1 y para las negaciociones -1 */

  int resultado = 1;

  char jugador_en_jugada =
    ver_pieza (pos_i_x, pos_i_y, pos_f_x, pos_f_y, tablero[8][8]);

  if (revisar_coordenada (pos_i_x, pos_i_y, tablero[8][8]) == -1)
    {
      resultado = -1;
    }

  else if (ver_coordenada (pos_i_x, pos_i_y, pos_f_x, pos_f_y) == -1)
    {
      resultado = -1;
    }

  else if ((ver_pieza (pos_i_x, pos_i_y, pos_f_x, pos_f_y, tablero[8][8]) !=
	    'v')
	   && (ver_pieza (pos_i_x, pos_i_y, pos_f_x, pos_f_y, tablero[8][8])
	       == jugador_en_jugada))
    {
      resultado = -1;
    }

  if (resultado == 1)
    {
      printf ("Tu movimiento es valido\n");
    }
  else
    {
      printf ("Tu movimiento no es valido\n");
    }

  return resultado;
}
