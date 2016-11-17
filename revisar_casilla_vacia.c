int revisar_casilla_vacia(char tablero[8][8], int i, int j)
{
     /* Se verifica si la casilla introducida está vacía, si es así, se regresa el entero 1 */
	if(tablero[i][j]!='\0')
	 {
	   return -1;
	 }
	return 1;
}
