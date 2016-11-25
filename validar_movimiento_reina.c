int
validar_movimiento_reina (char tablero[8][8], int x1, int y1, int x2, int y2)
{
  if (x2 == x1 || y2 == y1)
    {
      return validar_movimiento_lineal (tablero, x1, y1, x2, y2);
    }
  else
    {
      return validar_movimiento_diagonal (tablero, x1, y1, x2, y2);
    }
}
