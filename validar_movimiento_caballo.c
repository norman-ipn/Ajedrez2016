int revisar_coordenada(int pos_i_x, int pos_i_y, char tablero [8][8])
 {
   /* Para poder saber si esta vacia la casilla se tiene que saber el char que esta en la posicion que se desea revisar. Suopongamos que 0 = negras, 1 = blancas. Para poder comparar si esta o no ocupada hacemos un cast*/

 if ( (int)tablero [pos_i_x][pos_i_y] > 1 )
 } 
    return -1;
 }

 return 1;  
 }

int validar_movimiento_caballo(int pos_i_x, int pos_i_y, int pos_f_y, int pos_f_x, char tablero[8][8])
 { /* pos_i=Posicion inicial. pos_f=Posicion final.*/
   /* Para todas las afirmaciones se usara un 1 y para las negaciones un -1 */

 int resutado = 0;

 if( revisar_coordenada(pos_i_x, pos_i_y, tablero [8][8]) == 1)
  {
    reultado = 1;
  }
 resultado = -1;
 return resultado;
}
