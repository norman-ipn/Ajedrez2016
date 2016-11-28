#include <stdio.h>
#define TAMT 8
//Definiendo colores a utilizar
#define Azul    "\x1b[34m"
#define RESET   "\x1b[0m"


int
azul (void)
{
  char tablero[9][9];
  int i = 0;
  int j = 0;
  int e = 0;
  for (i = 0; i < 8; i = i + 1)
    {
      tablero[i][j] = '*';
      printf (" ");
      printf (Azul "%c" RESET, tablero[i][j]);
    }
/*-----------------------------------*/
  printf ("\n");

  i = 0;
  while (j < 8)
    {
      printf (" ");
      tablero[7][j] = '*';
      printf (Azul "%c" RESET, tablero[7][j]);
/*Aqui le puedes quitar el while y poner la letras de las piezas :D*/
      while (e < 17)
	{
	  printf (" ");
	  e = e + 1;
	}
      e = 0;
/*-----------------------------------------------------------------*/
      tablero[i][j] = '*';
      printf (Azul "%c \n" RESET, tablero[i][j]);
      j = j + 1;
    }
/*-----------------------------------*/
  i = 0;
  for (i = 0; i <= 9; i = i + 1)
    {
      tablero[i][8] = '*';
      printf (" ");
      printf (Azul "%c" RESET, tablero[i][8]);
    }
/*-----------------------------------*/
  printf ("\n");
  return 0;
}

//Aqui va un arreglo para los colores

char IdColor[3][12] = {"\x1b[0m","\x1b[34m","\x1b[35m"};


void color(int col){
  char tablero[TAMT+1][TAMT+1];
  int i,j,e;
  for(i = 0; i < TAMT ; i++){
    for(j = 0 ; j < TAMT ; j++){
        if(i == 0 || j == 0 || i == TAMT-1 || j == TAMT-1)
          tablero[i][j]='*';
    }
  }
  for(i = 0; i < TAMT ; i++){
    if(i) printf("\n");
    for(j = 0 ; j < TAMT ; j++){
        if(j) printf(" ");
        if(i == 0 || j == 0 || i == TAMT-1 || j == TAMT-1){
            printf("%s", IdColor[col]);
            printf ( "%c", tablero[i][j]);
            printf("%s", IdColor[0]);
        } else 
            printf(" ");
    }
    printf("\n");
  }
}


int main(void)
{
  color(2);
  return 0;
}
