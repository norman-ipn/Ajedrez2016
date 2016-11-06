void
inicializar (char tablero[8][8])
{
  */iniciar piezas * /int i = 0;
  tablero[0][0] = 'T';
  tablero[0][1] = 'C';
  tablero[0][2] = 'A';
  tablero[0][3] = 'R';
  tablero[0][4] = 'D';
  tablero[0][5] = 'A';
  tablero[0][6] = 'C';
  tablero[0][7] = 'T';

  tablero[6][0] = 't';
  tablero[6][1] = 'c';
  tablero[6][2] = 'a';
  tablero[6][3] = 'd';
  tablero[6][4] = 'r';
  tablero[6][5] = 'a';
  tablero[6][6] = 'c';
  tablero[6][7] = 't';
  while (i < 8)
    {
      tablero[1][i] = 'P';
/* Piezas blancas se identifican por estar en mayusculas */
      tablero[6][i] = 'p';
/* Piezas negras se identifican por estar en minusculas */
      i = i + 1;
    }
}
