int
validar_movimiento (char tablero[8][8], int posicion_ini_x int posicion_ini_y,
		    int posicion_x, int posicion_y, char pieza)
{
  int resultado = 0;
	switch (pieza)
	{
		case 'P' :
			
    
      resultado =
	validar_movimiento_peon_blanco (posicion_ini_x, posicion_ini_y,
					posicion_y, posicion_x, tablero);
			break;
    

  
		case 'p' :
      resultado =
	validar_movimiento_peon_negro (posicion_ini_x, posicion_ini_y,
				       posicion_y, posicion_x, tablero);
    break;

  
		case 'T' :
      resultado =
	validar_movimiento_torre (posicion_ini_x, posicion_ini_y, posicion_y,
				  posicion_x, tablero);
			break;
    

		case 't' :
      resultado =
	validar_movimiento_torre (posicion_ini_x, posicion_ini_y, posicion_y,
				  posicion_x, tablero);
     break;
  if (pieza == 'C')
    {
      resultado =
	validar_movimiento_caballo (posicion_ini_x, posicion_ini_y,
				    posicion_y, posicion_x, tablero);
    }
  if (pieza == 'c')
    {
      resultado =
	validar_movimiento_caballo (posicion_ini_x, posicion_ini_y,
				    posicion_y, posicion_x, tablero);
    }

  if (pieza == 'A')
    {
      resultado =
	validar_movimiento_alfil (posicion_ini_x, posicion_ini_y, posicion_y,
				  posicion_x, tablero);
    }
  if (pieza == 'a')
    {
      resultado =
	validar_movimiento_alfil (posicion_ini_x, posicion_ini_y, posicion_y,
				  posicion_x, tablero);
    }
  if (pieza == 'R')
    {
      resultado =
	validar_movimiento_rey (posicion_ini_x, posicion_ini_y, posicion_y,
				posicion_x, tablero);
    }
  if (pieza == 'r')
    {
      resultado =
	validar_movimiento_rey (posicion_ini_x, posicion_ini_y, posicion_y,
				posicion_x, tablero);
    }
  if (pieza == 'D')
    {
      resultado =
	validar_movimiento_reina (posicion_ini_x, posicion_ini_y, posicion_y,
				  posicion_x, tablero);
    }
  if (pieza == 'd')
    {
      resultado =
	validar_movimiento_reina (posicion_ini_x, posicion_ini_y, posicion_y,
				  posicion_x, tablero);
    }

}
  return resultado;
}
