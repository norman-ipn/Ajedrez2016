
#ifndef __PERSISTENCIA_H__
#define __PERSISTENCIA_H__

#include <stdio.h>
#include <stdlib.h>

int Guardar_Partida (void);
void continuar_partida (char archivo[100]);
void obten_hora (void);
void actualiza_historial (int resultado);
int turno_jugador (void);

#endif/*__PESISTENCIA_H_*/
