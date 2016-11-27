/* regresa 1 si es valida y -1 si no */
/* Debe validar que se pueda hacer el movimiento y que no deje en jaque al rey */
/* Esta funcion ya sirve, con ligado a "validar_movimiento_diagonal"*/
int
validar_movimiento_alfil(char tablero[8][8], int x1, int y1, int x2, int y2)
{
	return validar_movimiento_diagonal(tablero, x1, y1, x2, y2);
}


   
