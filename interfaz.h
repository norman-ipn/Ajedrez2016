#ifndef __INTERFAZ_H__
#define __INTERFAZ_H__
#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
void setUp (void);
void manual (void);
void animaciones (int n);
void piezas_comidas (int a);
void letreros (int n);
void menu (void);
void imprimir_tablero (struct tablero *tablero);
void reglas_alfil (void);
void reglas_basicas (void);
void reglas_caballo (void);
void reglas_enroque (void);
void reglas_jaque (void);
void reglas_jaque_mate (void);
void reglas_peon (void);
void reglas_rey (void);
void reglas_reyna (void);
void reglas_torre (void);

#endif/*__INTERFAZ_H__*/
