/*ACTUALIZACIÓN DE FUNCIÓN localizar_pieza CON FOR, CORRIGE EL REINICIO DE CICLO*/
/*MISMO NOMBRE DE FUNCIÓN || FUNCIÓN ORIGINAL CON WHILE BY Alichos*/

void
localizar_pieza (char tablero[8][8], char pieza, int *x, int *y)
{
	int i = 0;
	int j = 0;
	
	for (i = 0; i < 8; i = i + 1)
	{
		for (j = 0; j < 8; j = j + 1)
		{
			if (tablero[i][j] == pieza)
			*x = i;
			*y = j;
		}
	}
}
