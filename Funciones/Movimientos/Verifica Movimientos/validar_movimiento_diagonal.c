/*La funcion va a ser invalida si no revisas si cuando se va a mover la funcion da lugar a un jaque*/

/*Devuelve 1 si es valido, -1 si no lo es*/
int
validar_movimiento_diagonal(char tablero[8][8], int x1, int y1, int x2, int y2)
{
	int direccion[4][2] = {  {1,1}, {1,-1}, {-1,1}, {-1,-1} };
	return validar_movimientos_continuos(tablero, direccion, x1, y1, x2, y2);
}
