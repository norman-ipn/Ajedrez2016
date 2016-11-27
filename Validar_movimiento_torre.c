/*Esta función recibe la posición de la ficha, y la casilla donde se movera la pieza, se invoca cuando se escribe en el juego. */
/*Por ejemplo TORRE A3 y valida que el movimiento de la pieza sea valido.*/
int 
validar_movimiento_torre(char tablero[8][8],int pos_ini_x,int pos_ini_y,int pos_x,int pos_y)
{

  return validar_movimiento_lineal(tablero, pos_ini_x,pos_ini_y,pos_x,pos_y);
}


