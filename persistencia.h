
#ifndef __PERSISTENCIA_H__
#define __PERSISTENCIA_H__

#include <stdio.h>
#include <time.h>
#include <stdlib.h>
#include <string.h>

struct E_Stack
{

  char tablero[8][8];
  struct E_Stack *sig;
  struct E_Stack *ant;

};

struct Stack
{

  struct E_Stack *act;
};

int
Guardar_Partida (int jugador, int x_inicial, int y_inicial, int x_final,
		 int y_final, int i);
void continuar_partida (char archivo[100], int);
void obten_hora (void);
void actualiza_historial (int resultado);
int turno_jugador (void);
void Agrega_Stack (struct Stack *S, char tablero[][8]);
void Anterior (struct Stack *S);
void Siguiente (struct Stack *S);
void Imprime (struct Stack *S);


#endif/*__PESISTENCIA_H_*/
