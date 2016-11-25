//la funcion mover pieza es una parte del codigo modificado del archivo menu.c
void
mover_pieza (char tablero[8][8])
{
  char movimiento[5];
  char aux;
  char aux2;
  int columna = 0, 
  int fila = 0;
  int columna_2 = 0, 
  int fila_2 = 0;
 
  printf ("Introduzca la coordenada de la pieza que desea mover\n\n");
 
  scanf ("%s", movimiento);
  columna = movimiento[1] - '1';
  fila = movimiento[0] - 'A';
  aux = tablero[fila][columna];
  tablero[fila][columna] = '*';
 
  movimiento[2] = 'i';
  printf ("\nIntroduzca la coordenada de destino \n\n");
char h[5];
  scanf ("%s", h);
  columna_2 = h[1] - '1';
  fila_2 = h[0] - 'A';
  aux2 = tablero[fila_2][columna_2]
   if (aux2 == '*')
 	{
 		aux = aux;
 		// guardar_mov (movimiento); 
  		printf ("Tu pieza ha sido movida exitosamente\n\n"); 
 	}
   if (tablero[fila_2][columna_2] != '*')
   	{
   		char res = '0';
   		res = amigo_o_enemigo(aux,aux2);
   		return res;
   		aux = aux2;
   	}
  pausa ();
 
}

//esta funcion dice si la casilla a la que se quiere avanzar esta libre o no

void 
amigo_o_enemigo(char aux ,char aux2)
{
 char mover = aux;
 char destino = aux2;
	if ( mover = 't' || mover = 'c'||mover = 'a'||mover = 'r'||mover = 'm')
 		{
  			else if(destino= 'T' || destino= 'C'||destino= 'A'||destino = 'R'||destino = 'M') 
  			{
  				char res = '0';
  				res = comer_pieza(mover, destino);
  				retur res;
  			}
 		}
 	
 		if ( mover = 't' || mover = 'c'||mover = 'a'||mover = 'r'||mover = 'm')
 		{
  			else if(destino= 't' || destino= 'c'||destino= 'a'||destino = 'r'||destino = 'm') 
  			{
  				printf("la coordenada de destino se encuentra ocupada por otra pieza tuya");
  			}
 		}
 	
 		if ( mover = 'T' || mover = 'C'||mover = 'A'||mover = 'R'||mover = 'M')
 		{
  			else if(destino= 't' || destino= 'c'||destino= 'a'||destino = 'r'||destino = 'm') 
  			{
  				char res = '0';
  				res = comer_pieza(mover, destino);
  				return res;
  			}
 		}
 	
 		if ( mover = 'T' || mover = 'C'||mover = 'A'||mover = 'R'||mover = 'M')
 		{
  			else if(destino= 'T' || destino= 'C'||destino= 'A'||destino = 'R'||destino = 'M') 
  			{
  				printf("la coordenada de destino se encuentra ocupada por otra pieza tuya");
  			}
 		}
}



void comer_pieza(char mover, char destino);
{
	char resultado = '0'; 
	destino = mover;
	
	resultado = destino;
	return resultado;
}
