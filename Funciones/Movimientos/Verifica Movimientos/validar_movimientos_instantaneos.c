/* En el arreglo "direccion" deben ir todos los posibles movimientos de la pieza */
/* Esta funcion esta para la ficha de rey y caballo */

int
validar_movimientos_instantaneos(char tablero[8][8], int direccion[8][2], int x1, int y1, int x2, int y2)
{	
	int i = 0;
	int siguiente_x = 0;
	int siguiente_y = 0;

	while(i < 8)
	{
		siguiente_x = x1 + direccion[i][0];
		siguiente_y = y1 + direccion[i][1];
		if(coordenada_valida( siguiente_x , siguiente_y ) &&
		       tablero[siguiente_x][siguiente_y] == ' ')
		{
			
			if(siguiente_x == x2 && siguiente_y == y2)
			{     
				return 1;
			}
		}
		i = i + 1;		
	}
	return -1;
}
