
int 
comprobar_casilla (char tablero [8][8], int x_inicial, int y_inicial, int x_final, int y_final)
{
int n=1; /* contador de y */
int m=1; /* contador de x */
while (x>= -1)
{
	n = 1;
	while(n>=-1)
	{
		if ( ((x_inicial+m) == (x_final)) && ((x_inicial+n) == (x_final)) )
		{
			if (tablero[x_final][y_final] == '0')
			{	
				return 1;
			}
			return 0;
		}

		n = n -1;		
	}
 m = m-1
}
return 0;
}

int 
MoverRey (char tablero [8][8], int x_inicial, int y_inicial, int x_final, int y_final)
{
	int estado = 1;
	estado = comprobar_casilla(tablero, x_final, y_final); /*comprueba que la casilla este en el rango del movimiento y que este vacia */
	
	if (estado == 0)
	{
		return 0 ; /* No es posible el movimiento */
	}
	
	estado = comprobar_movimiento(tablero, x_final, y_final) /* comprueba que el movimiento no ponga en jaque al rey */
	
	if (estado == 1)
	{
		return 1; /* es posible el movimiento */
	}
	
	return 0; /* no es posible */
}
