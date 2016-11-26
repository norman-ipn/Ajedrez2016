int
validar_movimiento (char tablero[8][8], int posicion_ini_x int posicion_ini_y,
		    int posicion_x, int posicion_y, char pieza)
{

  int resultado = 0;
  switch (pieza)
    {
    case 'P':


      resultado =
	validar_movimiento_peon (tablero, posicion_ini_x, posicion_ini_y,
				 posicion_x, posicion_y);
      break;


    case 'p':
      resultado =
	validar_movimiento_peon (tablero, posicion_ini_x, posicion_ini_y,
				 posicion_x, posicion_y);
      break;


    case 'T':
      resultado =
	validar_movimiento_torre (tablero, posicion_ini_x, posicion_ini_y,
				  posicion_x, posicion_y);
      break;


    case 't':
      resultado =
	validar_movimiento_torre (tablero, posicion_ini_x, posicion_ini_y,
				  posicion_x, posicion_y);
      break;
    case 'C':
      resultado =
	validar_movimiento_caballo (tablero, posicion_ini_x, posicion_ini_y,
				    posicion_x, posicion_y);
      break;

    case 'c':
      resultado =
	validar_movimiento_caballo (tablero, posicion_ini_x, posicion_ini_y,
				    posicion_x, posicion_y);
      break;

    case 'A':

      resultado =
	validar_movimiento_alfil (tablero, posicion_ini_x, posicion_ini_y,
				  posicion_x, posicion_y);
      break;

    case 'a':

      resultado =
	validar_movimiento_alfil (tablero, posicion_ini_x, posicion_ini_y,
				  posicion_x, posicion_y);
      break;

    case 'R':

      resultado =
	validar_movimiento_rey (tablero, posicion_ini_x, posicion_ini_y,
				posicion_x, posicion_y);
      break;
    case 'r':

      resultado =
	validar_movimiento_rey (tablero, posicion_ini_x, posicion_ini_y,
				posicion_x, posicion_y);
      break;
    case 'D':

      resultado =
	validar_movimiento_reina (tablero, posicion_ini_x, posicion_ini_y,
				  posicion_x, posicion_y);
      break;
    case 'd':

      resultado =
	validar_movimiento_reina (tablero, posicion_ini_x, posicion_ini_y,
				  posicion_x, posicion_y);
      break;

    }

  return resultado;
}
