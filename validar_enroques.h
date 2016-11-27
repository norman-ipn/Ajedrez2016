#include "casilla_atacada.h"
#include "revisar_casilla_vacia.h"
#include "turno.h"

void
evaluar_enroque(char tablero[8][8], int turno, int pos_torre_x, int pos_torre_y);
int 
validar_enroque_largo_blanco (int mov_TD, int mov_R, char tablero[8][8]);
int 
validar_enroque_largo_negro (int mov_TD, int mov_R, char tablero[8][8]);
int 
validar_enroque_corto_blanco (int mov_TD, int mov_R, char tablero[8][8]);
int 
validar_enroque_corto_negro (int mov_TD, int mov_R, char tablero[8][8]);

