/*
 Detecta si la configuracion actual del tablero admite jaque hacia algun rey
 Recibe como parametros el tablero y la pieza del rey, puede ser R para una pieza negra,
 o r para una pieza blanca. Voy a asumir que una casilla donde haya un espacio, no hay pieza
 Tambien asumo que un rey no puede dar jaque a otro rey
 Devuelve 1 si el rey solicitado esta en jaque, -1 en otro caso
 Depende de: localizar_pieza, validar_movimiento, color_pieza
 pendiente: detectar jaqur mate
  */
int
detectar_jaque (char tablero[8][8], char pieza_rey)
{
  /*coordenadas del rey: (x,y)
     coordenadas de la pieza actual : (i,j)
     vamos a verificar pieza por pieza a ver si le puede dar jaque al rey */
  int x = 0;
  int y = 0;
  int i = 0;
  int j = 0;
  char pieza_actual = '\0';
  localizar_pieza (tablero, pieza_rey, &x, &y);
  for (i = 0; i < 8; i = i + 1)
    {
      for (j = 0; j < 8; j = j + 1)
	{
	  if (i != x && j != y && tablero[i][j] != ' ')
	    {
	      pieza_actual = tablero[i][j];
	      if (!
		  ((pieza_actual == 'R' && pieza_rey == 'r')
		   || (pieza_actual == 'r' && pieza_rey == 'R')
		   || color_pieza (pieza_actual) == color_pieza (pieza_rey)))
		{
		  if (validar_movimiento
		      (tablero, i, j, x, y, pieza_actual) == 1)
		    {
		      return 1;
		    }
		}
	    }
	}
    }
  return -1;
}
