/*
 Cambios pendientes
 Veré en la semana
*/

void
reiniciar_tablero (char tablero[8][8])
{

  int i = 0;
  int j = 1;

  while (j < 7)
    {
      tablero[j][i] = '\0';

      i = i + 1;

      if (i == 7)
	{
	  i = 0;
	  j = j + 1;
	}
    }

  while (i < 8)
    {
      tablero[1][i] = 'p';
      tablero[6][i] = 'P';
      i = i + 1;
    }
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
}
