#include <stdio.h>
#include <stdlib.h>
int main(){

char tablero[8][8];
  int a = 0;
  int x = 0;			/* variable de control de la posición del tablero en x */
  int y = 0;
  int f = 8;			/* variable de control de la posición del tablero en y */
  int i = 0;
  int turno = 0;
  int movimiento[1][1];
  int m,n,o,p;
  int juego = 1;
  int tablerob[8][8];
while (y <= 8)
    {				/*Se inicializa tablero con caracteres nulos, para no tener basura */
      while (x <= 8)
	{
	  tablero[x][y] = ' ';
	  x = x + 1;
	}
      x = 0;
      y = y + 1;
    }
  x = 0;
  y = 0;
 
  char TorreN[]="\u2662";
  char AlfilB[]="\u2657";
  char AlfilN[]="\u2663";
  char CaballoB[]="\u2658";
  char CaballoN[]="\u2664";
  char ReynaB[]="\u2655";
  char ReynaN[]="\u2661";
  char ReyB[]="\u2654";
  char ReyN[]="\u2660";
  char PeonB[]="\u2659";
  char PeonN[]="\u2665";
  char TorreB[]="\u2656";
  char Partesuperior[] ="\u250F\u2501\u2501\u2501\u2533\u2501\u2501\u2501\u2533\u2501\u2501\u2501\u2533\u2501\u2501\u2501\u2533\u2501\u2501\u2501\u2533\u2501\u2501\u2501\u2533\u2501\u2501\u2501\u2533\u2501\u2501\u2501\u2513";
  char cuerpo[]= "\u2523\u2501\u2501\u2501\u254B\u2501\u2501\u2501\u254B\u2501\u2501\u2501\u254B\u2501\u2501\u2501\u254B\u2501\u2501\u2501\u254B\u2501\u2501\u2501\u254B\u2501\u2501\u2501\u254B\u2501\u2501\u2501\u252B ";
  char parteinferior[] = "\u2517\u2501\u2501\u2501\u253b\u2501\u2501\u2501\u253b\u2501\u2501\u2501\u253b\u2501\u2501\u2501\u253b\u2501\u2501\u2501\u253b\u2501\u2501\u2501\u253b\u2501\u2501\u2501\u253b\u2501\u2501\u2501\u251b";
   
/* Iniciando piezas */
  tablero[0][0] = 't';
  tablero[0][1] = 'c';
  tablero[0][2] = 'a';
  tablero[0][3] = 'd';
  tablero[0][4] = 'r';
  tablero[0][5] = 'a';
  tablero[0][6] = 'c';
  tablero[0][7] = 't';
  tablero[7][0] = 'T';
  tablero[7][1] = 'C';
  tablero[7][2] = 'A';
  tablero[7][3] = 'D';
  tablero[7][4] = 'R';
  tablero[7][5] = 'A';
  tablero[7][6] = 'C';
  tablero[7][7] = 'T';
  while (i < 8)
    {
/* Piezas blancas se identifican por estar en mayúsculas, negras en minúsculas */
      tablero[6][i] = 'P';
      tablero[1][i] = 'p';
      i = i + 1;
    }
/* impresion del tablero de ajedrez*/
	printf("\n");
	printf("    ");
	while(juego = 1){
		printf("%s",Partesuperior);
	while (y < 7){
			printf("\n");
				printf("  %d ",f);
				while (a<8){
				printf("\u2503 %c ",tablero[y][x]);
				a= a +1; 
				x = x +1;
				
			}	
			printf("\u2503");
			printf("\n");
			printf("   ");
			a = 0;
			printf(" %s ",cuerpo);
		a = 0;
		x = 0;
		y = y +1;
		f = f -1;
	}
	printf("\n");
		printf("  %d ",f);
				while (a<8){
				printf("\u2503 %c ",tablero[y][x]);
				a= a +1; 
				x = x +1;
			}	
			printf("\u2503");
			printf("\n");
			printf("    ");
			a = 0;
		printf("%s",parteinferior);
	printf("\n");
		printf("    ");
	a = 0;
	while (a < 8){
		printf("  %c  ",65 + a);
		a = a +1;
	}

	printf("\nTurno de blancas\n Ingrese su movimiento");

	scanf("%d %d %d %d",&n,&m,&p,&o);

	printf("%d %d %d %d",m,n,o,p);

	if (tablero [m][n] != ' '){

	

	tablero[o][p] = tablero [m][n];

	tablero [m][n] = ' ';

	printf("\n");}
	printf("\n");
	a = 0; 

	x = 0;

	y = 0;

	f = 8;

	printf("    ");

}
}




