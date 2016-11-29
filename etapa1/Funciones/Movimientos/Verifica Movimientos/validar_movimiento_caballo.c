/* Devuelve 1 si es valida, -1 si no lo es */
/* Esta función es mas sencilla que la anterior, NO CAMBIAR */

int
validar_movimiento_caballo(char tablero[8][8], int x1, int y1, int x2, int y2)
{
	int direccion[8][2] = { {2, 1}, {2, -1}, {-2, 1}, {-2, -1}, {1, 2}, {-1, 2}, {-1, -2}, {1, -2} };
	return validar_movimientos_instantaneos(tablero, direccion, x1, y1, x2, y2);
}
