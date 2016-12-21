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

int calcularvalor(int n1,int n2, int n3,int n4);

int comparar(int , int ,int, int,int);

void mover_peon (struct tablero *board, char jugada[4]);

int arriba (struct tablero *board, int x, int y, char jugada[4], int valor);

int abajo (struct tablero *board, int x, int y, char jugada[4], int valor);

int izquierda (struct tablero *board, int x, int y, char jugada[4], int valor);

int derecha (struct tablero *board, int x, int y, char jugada[4], int valor);

int cruz (struct tablero *board, int x, int y, char jugada[4], int valor);

int diagonalard (struct tablero *board, int x, int y, char jugada[4], int valor);

int diagonalabd (struct tablero *board, int x, int y, char jugada[4], int valor);

int diagonalari (struct tablero *board, int x, int y, char jugada[4], int valor);

int diagonalabi (struct tablero *board, int x, int y, char jugada[4], int valor);

int diagonal (struct tablero *board, int x, int y, char jugada[4], int valor);

int cab1 (struct tablero *board, int x, int y, char jugada[4], int valor);

int cab2 (struct tablero *board, int x, int y, char jugada[4], int valor);

int cab3 (struct tablero *board, int x, int y, char jugada[4], int valor);

int cab4 (struct tablero *board, int x, int y, char jugada[4], int valor);

int cab5 (struct tablero *board, int x, int y, char jugada[4], int valor);

int cab6 (struct tablero *board, int x, int y, char jugada[4], int valor);

int cab7 (struct tablero *board, int x, int y, char jugada[4], int valor);

int cab8 (struct tablero *board, int x, int y, char jugada[4], int valor);

int caballo (struct tablero *board, int x, int y, char jugada[4], int valor);

int pe1 (struct tablero *board, int x, int y, char jugada[4], int valor);

int pe2 (struct tablero *board, int x, int y, char jugada[4], int valor);

int peon (struct tablero *board, int x, int y, char jugada[4], int valor);

int lados (struct tablero *board, int x, int y, char jugada[4], int valor);

int verificar (struct tablero *board, int x, int y, int valor, char jugada[4]);

int analizar (struct tablero *board, char jugada[4]);

void ia (struct tablero *board, char jugada[4]);

int *posicion_caballo (struct tablero *board, int tipopieza);

int *posicion_alfil (struct tablero *board, int tipopieza);

int *posicion_torre (struct tablero *board, int tipopieza);

int *posicion_reina (struct tablero *board, int tipopieza);

int verifcar_rey_en_jaque (struct tablero *board, int x1, int y1, int x2,
			   int y2);

/*int comparar (int , int );

void cambiar (int , int , int , int , char [4]);

int calcularvalor (int , int , int , int , char [8][8]);*/

#endif/*__IA_H__*/
