#ifndef __IA_H_
#define __IA_H__
#include "time.h"
#include "stdlib.h"
#include "piezas.h"
#include "persistencia.h"
#include "tablero.h"
typedef struct tablero Tablero;
int revisar_casilla_peon (struct tablero *board, int x1, int y1);
int escapar (struct tablero *board, int x1, int y1);
int atacar (struct tablero *board, int x, int y);
int podemosComer (struct tablero *board);
int podemosSerComidos (struct tablero *board);
int MovimientoRandom (struct tablero *board, int x0, int y0, int x, int y,
		      int x1, int y1, int x2, int y2);
int validar_movimiento_torre (struct tablero *board, int x0, int y0, int x,
			      int y);
int responder_jugada(struct tablero *, int,char *,int,int); 
//int validar_peon (struct tablero *board, int x1, int y1, int x2, int y2);
int validar_movimiento_caballo (struct tablero *board, int x1, int y1, int x2,
				int y2);
int movimiento;

#endif/*__IA_H__*/
