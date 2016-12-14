
#ifndef __PERSISTENCIA_H__
#define __PERSISTENCIA_H__

#include <stdio.h>
#include <stdlib.h>

void Guardar_Partida (int jugador, int x_inicial, int y_inicial, int x_final,
		      int y_final);
void continuar_partida (char archivo[100]);
void obten_hora (void);
void actualiza_historial (int resultado);
int turno_jugador (void);

#endif/*__PESISTENCIA_H_*/
