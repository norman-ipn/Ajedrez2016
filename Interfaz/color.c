
/*=============================================
==========   COLORES EN PANTALLA   ============
=============================================*/

/* README: Este codigo se encarga de enviar colores a la pantalla

¿Como usar esta funcion?
Llamala y entonces podras imprimir el tablero con colores

*/


#include <stdio.h>

//Tamñano del tablero a mostrar
#define TAMT 8

//Definiendo colores a utilizar
#define RESET   "\x1b[0m"           //0
#define NEGRO    "\x1b[30m"         //1
#define ROJO    "\x1b[31m"          //2
#define VERDE   "\x1b[32m"          //3
#define AMARRI  "\x1b[33m"          //4
#define AZUL    "\x1b[34m"          //5
#define MAGENTA "\x1b[35m"          //6
#define CYAN    "\x1b[36m"          //7

//Aqui va un arreglo para los colores
char IdColor[3][12] = {RESET,NEGRO,ROJO,VERDE,AMARRI,AZUL,MAGENTA,CYAN};

// ==========================================
// ======= Funcion principal del color  =====
// ==========================================

void color(int NumColor){
  char tablero[TAMT+1][TAMT+1];
  int i,j,e;
  for(i = 0; i < TAMT ; i++){
    for(j = 0 ; j < TAMT ; j++){
        if(i == 0 || j == 0 || i == TAMT-1 || j == TAMT-1)
          tablero[i][j]='*';
    }
  }
  for(i = 0; i < TAMT ; i++){
    for(j = 0 ; j < TAMT ; j++){
        if(j) printf("  ");
        if(i == 0 || j == 0 || i == TAMT-1 || j == TAMT-1){
            printf("%s", IdColor[NumColor]);
            printf ( "%c", tablero[i][j]);
            printf("%s", IdColor[0]);
        } else 
            printf(" ");
    }
    printf("\n");
  }
}
