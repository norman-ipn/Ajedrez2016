#ifndef __TABLERO_H__
#define __TABLERO_H__

struct tablero
{
  char casillas[8][8];
  char se_movio[8][8];
};

#include "piezas.h"

enum filas
{ FILA_1 = 0, FILA_2, FILA_3, FILA_4, FILA_5, FILA_6, FILA_7, FILA_8 };

enum columnas
{
  COLUMNA_A = 0, COLUMNA_B, COLUMNA_C, COLUMNA_D,
  COLUMNA_E, COLUMNA_F, COLUMNA_G, COLUMNA_H
};



void
buscar_reyes (int *columna_K, int *fila_K, int *columna_k, int *fila_k,
	      struct tablero *un_tablero);

int
buscar_atacantes_negros (int fila_K, int columna_K,
			 struct tablero *un_tablero);

int buscar_atacantes_blancos (int fila_k, int columna_k,
			      struct tablero *un_tablero);

int verificar_jaque (struct tablero *un_tablero);

int verificar_jaque_mate (struct tablero *un_tablero);
void iniciar_tablero (struct tablero *un_tablero);

int paso (struct tablero *un_tablero, int columna, int fila);

void invertir_tablero (struct tablero *un_tablero);

int obtener_posicion (int Columna, int Fila);

char color_remplazo (int columna, int fila);

int tablero_negro (void);

int tablero_verde (void);

int tablero_rojo (void);

int tablero_amarillo (void);

int tablero_azul (void);

int tablero_magenta (void);

int tablero_cyan (void);

#endif/*__TABLERO_H__*/
