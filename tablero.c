#include "tablero.h"


void
iniciar_tablero (struct tablero *un_tablero)
{
  int columna = 0;
  int fila = 0;

  /* piezas blancas */
  un_tablero->casillas[COLUMNA_A][FILA_1] = TORRE_BLANCA;
  un_tablero->casillas[COLUMNA_B][FILA_1] = CABALLO_BLANCO;
  un_tablero->casillas[COLUMNA_C][FILA_1] = ALFIL_BLANCO;

  /* piezas negras */
  un_tablero->casillas[COLUMA_A][FILA_8] = TORRE_NEGRA;


  /* espacios vacios */
  un_tablero->casillas[COLUMA_A][FILA_3] = VACIA;


  /* movimiento: 0 no se movió, 1 si se movió */
  for (fila = 0; fila < 8; fila++)
    {
      for (columna = 0; columna < 8; columna++)
	{
	  un_tablero->se_movio[columna][fila] = 0;
	}
    }
}
