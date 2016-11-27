/* Regresa 1 si es valido, -1 si no lo es*/
/* La actualizacion fue para ahorrar codigo */

int
validar_movimiento_lineal(char tablero[8][8], int x1, int y1, int x2, int y2)
{
	int direccion[4][2] = {  {0,1}, {0,-1}, {1,0}, {-1,0} };
	return validar_movimientos_continuos(tablero, direccion, x1, y1, x2, y2);
}
