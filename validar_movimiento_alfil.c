/* regresa 1 si es valida y -1 si no */
/* El codigo anterior debia solo validar, no revisar mas cosas */
/* Esta funcion ya sirve, con ligado a "validar_movimiento_diagonal"*/
int
validar_movimiento_alfil(char tablero[8][8], int x1, int y1, int x2, int y2)
{
	return validar_movimiento_diagonal(tablero, x1, y1, x2, y2);
}


   
