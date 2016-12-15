
#ifndef __PERSISTENCIA_H__
#define __PERSISTENCIA_H__

#include <stdio.h>
#include <time.h>
#include <stdlib.h>

void Guardar_Partida (int jugador, int x_inicial, int y_inicial, int x_final,
		      int, int);
void continuar_partida (char archivo[100], int);
void obten_hora (void);
void actualiza_historial (int resultado);
int turno_jugador (void);

#endif/*__PESISTENCIA_H_*/
