#ifndef __PIEZAS_H__
#define __PIEZAS_H__

#include <stdio.h>

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
void inicializar (char a[8][8]);
int movimiento_valido (char tablero[8][8], int x1, int y1, int x2, int y2);
int
validar_enroque_largo_negro (int mov_torre, int mov_rey, char tablero[8][8]);
int validar_enroque_largo_blanco (int mov_TD, int mov_R, char tablero[8][8]);
int
validar_enroque_corto_negro (int mov_torre, int mov_rey, char tablero[8][8]);
int
validar_enroque_corto_blanco (int mov_torre, int mov_rey, char tablero[8][8]);
int conocer_turno_jugador (int turno);
void
evaluar_enroque (char tablero[8][8], int turno, int pos_torre_x,
		 int pos_torre_y);
void CoronacionPeon (char tablero[8][8], char pieza, int x, int y);
void
enrocar (int pos_torre_x, int pos_torre_y, int pos_rey_x, int pos_rey_y,
	 int fin_torre, int fin_rey, char tablero[8][8]);

#endif	/*__PIEZAS_H_*/
