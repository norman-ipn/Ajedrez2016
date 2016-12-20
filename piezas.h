#ifndef __PIEZAS_H__
#define __PIEZAS_H__
#include <stdio.h>
#include "tablero.h"

enum piezas
{
  PEON_BLANCO, PEON_NEGRO,
  TORRE_BLANCA, TORRE_NEGRA,
  CABALLO_BLANCO, CABALLO_NEGRO,
  ALFIL_BLANCO, ALFIL_NEGRO,
  REINA_BLANCA, REINA_NEGRA,
  REY_BLANCO, REY_NEGRO,
  VACIA
};

int movimiento_valido (struct tablero *, int, int, int, int);
int validar_movimiento_rey (struct tablero *, int, int, int, int);
int validar_movimiento_reina (struct tablero *, int, int, int, int);
int validar_movimiento_alfil (struct tablero *, int, int, int, int);
int validar_movimiento_torre (struct tablero *, int, int, int, int);
int validar_movimiento_caballo (struct tablero *, int, int, int, int);

int validar_peon (struct tablero *, char, int , int,int , int );

int validar_movimiento_peon (struct tablero *, int, int, int, int);
int validar_enroque_largo_negro (struct tablero *, int, int);
int validar_enroque_largo_blanco (struct tablero *, int, int);
int validar_enroque_corto_negro (struct tablero *, int, int);
int validar_enroque_corto_blanco (struct tablero *, int, int);
void
evaluar_enroque (struct tablero *, int turno, int pos_torre_x,
		 int pos_torre_y);
void CoronacionPeon (struct tablero *, char pieza, int x, int y);
void
enrocar (struct tablero *, int pos_torre_x, int pos_torre_y, int pos_rey_x,
	 int pos_rey_y, int fin_torre, int fin_rey);

#endif	/*__PIEZAS_H_*/
