/*esta funcion recibe el tablero y la coordenada actual del rey y valida los movimientos a las casillas de su alrededor y si encuentra uno valido regresa 0 si todos son invalidos regresa -1*/
int
opciones_movimiento_rey (char *tablero[8][8], int rey[2])
{
  int i = 0;
  int n;
  int rey_prueba[2];
  rey_prueba[0] = rey[0] - 1;
  rey_prueba[1] = rey[1] - 1;
  while (i < 9)
    {
      while (i < 3)
	{
	  n = validar_movimiento_rey (rey, rey_prueba);
	  if (n == 0)
	    {
	      return n;
	    }
	  rey_prueba[0] = rey_prueba[0] + 1;
	  i = i + 1;
	}
      rey_prueba[1] = rey_prueba[1] + 1;
    }
  return n;
}
