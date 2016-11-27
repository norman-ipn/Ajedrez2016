/* regresa 1 si es valida y -1 si no */

int
validar_movimiento_torre(char tablero[8][8], int x1, int y1, int x2, int y2)
{
  return validar_movimiento_lineal(tablero, x1, y1, x2, y2);
}
