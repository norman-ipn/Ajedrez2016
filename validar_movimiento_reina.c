//*Asumiendo un tablero indexado de 0 a 7, además del parámetro para el tablero
llevare dos enteros que representaran la coordenada de destino para la reina y usare dos funciones "locaizar _pieza" y "coordenada_valida" */   
{
int i=0;
int j=0;
int posicion_inicial_x=0;
int posicion_incial_y=0;
int posicion_nueva_x=0;
int posicion_nueva_y=0;
int direccion[8][3]= {{1,0},  {-1,0 },{1,1},{1,-1},{-1,-1}};

localizar_pieza(tablero, reina, &posicion_inicial_x, &posicion_inicial_y);

while (i<8) && (j<8)
{
posicion_nueva_x=posicion_inicial_x + direccion[i][0];
posicion_nueva_y=posicion_inicial_y + direccion[i][j]; 

	if (coordenada_valida (posicion_nueva_x, posicion_nueva_y) ==1&& tablero[posicion_nueva_x][posicion_nueva_y] == '.') 
		{
			if (posicion_nueva_x ==x && posicion_nueva_y==y)
			{
			 	return 1;
			}
		}
}
return -1;
}




