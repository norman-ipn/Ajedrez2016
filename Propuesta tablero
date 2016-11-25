#include <stdio.h>
#include <stdlib.h>

int
main (void)
{
	int i=0;
	int j=0;
	char tablero[8][8];
	
	for(i=0; i<8; i++)
	{
		for(j=0; j<8; j++)
		{
			if(i==1)
			{
				
				tablero[i][j] = 'P';
			}
			
			if( i == 6)
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
			else if((i ==6 && j == 0) || (i ==7 && j==6))
			{
				tablero[i][j]='c';
			}
			else if((i==0 && j ==2) || (i == 0 && j == 5))
			{
				tablero[i][j]='A';
			}
			else if((i ==7 && j == 2) || (i ==7 && j==6))
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
				
				for (i=0; i<8; i++)
				{
					printf("\n");
					for(j=0; j<8; j++)
					{
						printf("%c", tablero[i][j]);
					}
				}	
				return 0;
			
		}
	}
}	
