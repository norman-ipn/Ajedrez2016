#include <stdio.h>
#include <stdlib.h>	

int 
comer_pieza(char mover, char destino)
{
	char resultado = '0'; 
	destino = mover;
	
	resultado = destino;
	return 0;
}

int
amigo_o_enemigo(char i ,char j)
{
 char mover = i;
 char destino = j;
 
	if ( mover == 't' || mover == 'c'||mover == 'a'||mover == 'r'||mover == 'm')
 		{
  			if(destino == 'T' || destino == 'C'||destino == 'A'||destino == 'R'||destino == 'M') 
  			{
  				char res = '0';
  				res = comer_pieza(mover, destino);
  				return res;
  			}
 		}
 	
	else if( mover == 't' || mover == 'c'||mover == 'a'||mover == 'r'||mover == 'm')
 		{
  			if(destino == 't' || destino == 'c'||destino == 'a'||destino == 'r'||destino == 'm') 
  			{
  				printf("la coordenada de destino se encuentra ocupada por otra pieza tuya");
  			}
 		}
 	
 	else if( mover == 'T' || mover == 'C'||mover == 'A'||mover == 'R'||mover == 'M')
 		{
  			if(destino == 't' || destino == 'c'||destino == 'a'||destino == 'r'||destino == 'm') 
  			{
  				char res = '0';
  				res = comer_pieza(mover, destino);
  				return res;
  			}
 		}
 	
 	else /*( mover == 'T' || mover == 'C'||mover == 'A'||mover == 'R'||mover == 'M')*/
 		{
  			if(destino == 'T' || destino == 'C'||destino == 'A'||destino == 'R'||destino == 'M') 
  			{   
  				printf("la coordenada de destino se encuentra ocupada por otra pieza tuya");
  			}
 		}
		return 0;
}


int
mover_pieza ()
{
	
  char tablero[8][8];
  char aux;
  char aux2;
  int columna = 0; 
  int fila = 0;
  int columna_2 = 0; 
  int fila_2 = 0;
  
 
  printf ("Introduzca el numero de la fila donde se encuentra la pieza que quiere mover\n\n");
 
  scanf ("%s", &fila);
  
  printf ("Introduzca el numero de la columna donde se encuentra la pieza que quiere mover\n\n");
  
  scanf ("%s", &columna);
  
  aux = tablero[fila][columna];
  
  tablero[fila][columna] = '*';
 
  
  printf ("Introduzca el numero de la fila de la casilla de destino\n\n");

  scanf ("%s", &fila_2);
  
  printf ("Introduzca el numero de la columna de la casilla de destino\n\n");
  
  scanf ("%s", &columna_2);

  aux2 = tablero[fila_2][columna_2];
  
   if (aux2 == '*')
 	{
 		tablero[fila_2][columna_2] = aux; 
 	 
  		printf ("Tu pieza ha sido movida exitosamente\n\n"); 
 	}	

     else if (tablero[fila_2][columna_2] != '*')
   	{
   		char res;
   		res = amigo_o_enemigo(aux,aux2);
   		return res;
   		aux = aux2;
   	}
  //pausa ();
 return 0;
}

//esta funcion dice si la casilla a la que se quiere avanzar esta libre o no


int 
main (void)
{
	int res;
	res = mover_pieza();
	return 0;
}
