#include <stdio.h>
#include <stdlib.h>




char
amigo_o_enemigo(char i, char j)
{
 char mover = i;
 char destino = j;
 
	if ( mover == 't' || mover == 'c'||mover == 'a'||mover == 'r'||mover == 'm'||mover == 'p' )
 		{
  			if(destino == 'T' || destino == 'C'||destino == 'A'||destino == 'R'||destino == 'M'||destino == 'P') 
  			{
  				destino = mover;
  				printf ("\nTu pieza ha sido movida exitosamente\n\n"); 
  				
  				return destino;
  				
  			}
 		}
 	
	 if( mover == 't' || mover == 'c'||mover == 'a'||mover == 'r'||mover == 'm'||mover == 'p')
 		{
  			if(destino == 't' || destino == 'c'||destino == 'a'||destino == 'r'||destino == 'm'||destino == 'p') 
  			{
  				printf("la coordenada de destino se encuentra ocupada por otra pieza tuya");
  				
  				return destino;
  			}
 		}
 	
 	else if( mover == 'T' || mover == 'C'||mover == 'A'||mover == 'R'||mover == 'M'||mover == 'P')
 		{
  		 if(destino == 't' || destino == 'c'||destino == 'a'||destino == 'r'||destino == 'm'||destino == 'p') 
  			{
  				destino = mover;
  				printf ("\nTu pieza ha sido movida exitosamente\n\n"); 
  				
  				return destino;
  			
  			}
 		}
 	
 	 if( mover == 'T' || mover == 'C'||mover == 'A'||mover == 'R'||mover == 'M'||mover == 'P')
 		{
  			 if(destino == 'T' || destino == 'C'||destino == 'A'||destino == 'R'||destino == 'M'||destino == 'P') 
  			{   
  				printf("la coordenada de destino se encuentra ocupada por otra pieza tuya");
  				return destino;
  			}
 		}
 		
 		
		
}


int
mover_pieza ()
{
	
  
  char aux;
  char aux2;
  int columna = 0; 
  int fila = 0;
  int columna_2 = 0; 
  int fila_2 = 0;
  char tablero[8][8];
  int i=0;
  int j=0;
  
	
	for(i=0; i<8; i++)
	{
		for(j=0; j<8; j++)
		{
			if( i == 1)
			{
				
				tablero[i][j] = 'P';
			}
			
			else if( i == 6)
			{
				
				tablero[i][j] = 'p';
			}
			else if((i==0 && j ==0) || (i == 0 && j == 7))
			{
				tablero[i][j]='T';
			}
			else if((i ==7 && j == 0) || (i ==7 && j==7))
			{
				tablero[i][j]='t';
			}	
			else if((i==0 && j ==1) || (i == 0 && j == 6))
			{
				tablero[i][j]='C';
			}
			else if((i ==7 && j == 1) || (i ==7 && j==6))
			{
				tablero[i][j]='c';
			}
			else if((i==0 && j ==2) || (i == 0 && j == 5))
			{
				tablero[i][j]='A';
			}
			else if((i ==7 && j == 2) || (i ==7 && j==5))
			{
				tablero[i][j]='a';
			}
			else if(i==0 && j ==3)
			{
				tablero[i][j]='M';
			}
			else if(i ==7 && j == 3)
			{
				tablero[i][j]='m';
			}
			else if(i==0 && j ==4)
			{
				tablero[i][j]='R';
			}
			else if(i ==7 && j == 4)
			{
				tablero[i][j]='r';
			}
				else 
					{
					tablero[i][j]='*';
					}
		}
	}
		for (i=0; i<8; i++)
				{
					printf("\n");
					for(j=0; j<8; j++)
					{
						
						printf("%c", tablero[i][j],"\n");
						
					}
				}
 	
	 
	 
	 
  printf ("\n Introduzca el numero de la fila donde se encuentra la pieza que quiere mover\n\n");
 
  scanf ("%d", &fila);
  
  printf ("\n Introduzca el numero de la columna donde se encuentra la pieza que quiere mover\n\n");
  
  scanf ("%d", &columna);
  
  
  aux = tablero[fila][columna];
  
  tablero[fila][columna] = '*';
  	
for (i=0; i<8; i++)
				{
					printf("\n");
					for(j=0; j<8; j++)
					{
						
						printf("%c", tablero[i][j],"\n");
						
					}
				}
				
				

  printf ("\n Introduzca el numero de la fila de la casilla de destino\n\n");

  scanf ("%d", &fila_2);
  
  printf ("\n Introduzca el numero de la columna de la casilla de destino\n\n");
  
  scanf ("%d", &columna_2);

  aux2 = tablero[fila_2][columna_2];
  
  if (aux2 == '*')
 	{
 		
 		tablero[fila_2][columna_2] = aux; 
 		
 		  for (i=0; i<8; i++)
				{
					printf("\n");
					for(j=0; j<8; j++)
					{
						
						printf("%c", tablero[i][j],"\n");
						
					}
				} 
 	 
  		printf ("\nTu pieza ha sido movida exitosamente\n\n"); 
  		
  	}
  
 		

     else if (tablero[fila_2][columna_2] != '*')
   	{
   		 char res;
	     res = amigo_o_enemigo(aux,aux2);
		 tablero[fila_2][columna_2]=res;
   		
   		
   		  for (i=0; i<8; i++)
				{
					printf("\n");
					for(j=0; j<8; j++)
					{
						
						printf("%c", tablero[i][j],"\n");
						
					}
				} 
   	}
   	
	
  
 return 0;
}

