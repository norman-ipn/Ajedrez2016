#ifndef __INTERFAZ_H__
#define __INTERFAZ_H__

#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>

enum animaciones
{
  ANIMACION_JAQUE,
  ANIMACION_JAQUE_MATE,
  ANIMACION_GANA_JUGADOR_1,
  ANIMACION_GANA_JUGADOR_2,
  ANIMACION_BIENVENIDA,
  ANIMACION_DESPEDIDA,
  LETRERO_AJEDREZ,
  LETRERO_CARGANDO
};

enum opciones
{
  OPCION_INICIAR_PARTIDA = 1,
  OPCION_CONTINUAR_PARTIDA,
  OPCION_MOSTRAR_MANUAL,
  OPCION_CONFIGURAR,
  OPCION_SALIR
};

//Salidas

void mostrar_bienvenida(void);
void mostrar_menu (void);
void mostrar_animacion (int animacion);
void instrucciones_manual(void);
void manual (void);
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

//Entradas
char capturar_caracter (void);

/*-
void setUp (void);
void piezas_comidas (int a);
void letreros (int n);
void imprimir_tablero (struct tablero *t);

int modo (void);
int jugar (struct tablero *un_tablero, int tipo_juego);
void texto_piezas (void);
void texto_destino (void);*/	

#endif/*__INTERFAZ_H__*/
