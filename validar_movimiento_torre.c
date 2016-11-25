/* regresa 1 si es valida y -1 si no */

int
validar_movimiento_torre(char tablero[8][8], int x1, int y1, int x2, int y2)
{
	if (x1 == y1){
		if(x2 != y2){
			return 1;
		}
		else{
			return -1;
		}
	}
	
	if(x2 == y2){
		if(x1 != y1){
			return 1;
		}
		else{
			return -1;
		}
	}
	
	return -1;
}
