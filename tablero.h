#ifndef __TABLERO_H__
#define __TABLERO_H__

#include "piezas.h"

enum filas
{ FILA_1 = 0, FILA_2, FILA_3, FILA_4, FILA_5, FILA_6, FILA_7, FILA_8 };
enum columnas
{
  COLUMNA_A = 0, COLUMNA_B, COLUMNA_C, COLUMNA_D,
  COLUMNA_E, COLUMNA_F, COLUMNA_G, COLUMNA_H
};


struct tablero
{
  char casillas[8][8];
  char se_movio[8][8];
};

void iniciar_tablero (struct tablero *un_tablero);


#endif/*__TABLERO_H__*/
