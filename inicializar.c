void
inicializar (char tablero[8][8])
{
  /* Iniciando piezas */
   int i = 0;
  tablero[0][0] = 'T';
  tablero[0][1] = 'C';
  tablero[0][2] = 'A';
  tablero[0][3] = 'R';
  tablero[0][4] = 'D';
  tablero[0][5] = 'A';
  tablero[0][6] = 'C';
  tablero[0][7] = 'T';

  tablero[7][0] = 't';
  tablero[7][1] = 'c';
  tablero[7][2] = 'a';
  tablero[7][3] = 'd';
  tablero[7][4] = 'r';
  tablero[7][5] = 'a';
  tablero[7][6] = 'c';
  tablero[7][7] = 't';
  while (i < 8)
    {
      tablero[1][i] = 'P';
/* Piezas blancas se identifican por estar en mayusculas */
      tablero[6][i] = 'p';
/* Piezas negras se identifican por estar en minusculas */
      i = i + 1;
    }
}
