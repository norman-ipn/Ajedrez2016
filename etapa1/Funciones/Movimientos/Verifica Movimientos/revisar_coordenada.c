#include "revisar_coordenada.h"
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
