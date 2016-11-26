/*
  Esta funcion imprimiría el tablero actual cuando se mande llamar
  la funcion de ofrecer_tablas.c
  Abierta a cualquier cambio que requiera
  Aunque creo que es sencilla la funcion :v
*/

void
ver_tablero(char tablero [8][8])
{
  int i = 0;
  int j = 0;
  
  for(i = 0; i < 8; i++)
  {
    for(j = 0; j < 8;j++)
    {
      printf(tablero[i][j]);
    }
  }
}
