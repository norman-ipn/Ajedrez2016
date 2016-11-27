/* pieza_jaque es el caracter de la pieza que pone en jaque al rey,
coordenadaa_pieza son el numero de fila y de columna donde se encuentra
la pieza que hace el jaque, y rey es igual el numero de fila
y de columna donde se encuentra el rey*/

int
declarar_jaque_mate (char tablero[8][8], char pieza_jaque,
		     int coordenadas_pieza[2], int rey[2])
{
  int mate = 0;
  mate = opciones_movimiento_rey (tablero, rey);
/* opciones_movimiento_rey es una funcio para ver si el rey puede hacer algun movimiento para salir del jaque*/
  if (mate == -1)
    {
      mate = bloquear_ataque (tablero, pieza_jaque, coodenadas_pieza, rey);
    }
/*bloquear_ataque es una funcion que vera si es posible que una pieza se coma a la pieza que hace el jaque o que se interponga entre esta y el rey*/

  /*Jaque Mate si mate regresa -1 y si regresa 0 solo jaque */

  return mate;
}
