void
inicializar (char tablero[8][8])
{
  int i = 0;
  int x = 0;			/* variable de control de la posición del tablero en x */
  int y = 0;			/* variable de control de la posición del tablero en y */

  while (y <= 8)
    {				/*Se inicializa tablero con caracteres nulos, para no tener basura */
      while (x <= 8)
	{
	  tablero[x][y] = '\0';
	  x = x + 1;
	}
      x = 0;
      y = y + 1;
    }
  x = 0;
  y = 0;
  /* Iniciando piezas */
  tablero[0][0] = 't';
  tablero[0][1] = 'c';
  tablero[0][2] = 'a';
  tablero[0][3] = 'd';
  tablero[0][4] = 'r';
  tablero[0][5] = 'a';
  tablero[0][6] = 'c';
  tablero[0][7] = 't';
  tablero[7][0] = 'T';
  tablero[7][1] = 'C';
  tablero[7][2] = 'A';
  tablero[7][3] = 'D';
  tablero[7][4] = 'R';
  tablero[7][5] = 'A';
  tablero[7][6] = 'C';
  tablero[7][7] = 'T';
  while (i < 8)
    {
/* Piezas blancas se identifican por estar en mayúsculas, negras en minúscula */
      tablero[6][i] = 'P';
      tablero[1][i] = 'p';
      i = i + 1;
    }
}
