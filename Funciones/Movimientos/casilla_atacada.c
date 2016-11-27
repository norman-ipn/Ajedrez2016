int
casilla_atacada (char tablero[8][8], int posicionini_x, int posicionini_y,
		 int posicionevaluar_x, int posicionevaluar_y)
{
  int resultado = 0;
  char ayuda = '';
  ayuda = tablero[posicionevaluar_y][posicionevaluar_x];

  tablero[posicionevaluar_y][posicionevaluar_x] =
    tablero[posicionini_y][posicionini_x];

  tablero[posicionini_y][posicionini_x] = ayuda;

  resultado = dar_jaque (tablero, posicionevaluar_x, posicionevaluar_y);

  tablero[posicionini_y][posicionini_x] =
    tablero[posicionevaluar_y][posicionevaluar_x];

  tablero[posicionevaluar_y][posicionevaluar_x] = ayuda;

  return resultado;



}
