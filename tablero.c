#include "tablero.h"
/* Agregué funcion inicializar aunque no estoy seguro si sea lo correcto, de todas formas guardé el código original escrito al inicio de la etapa */
/* Si estuvo mal agregar la función, hagánmelo saber y vuelvo a escribir el código inicial como lo tenía el profe */
void
iniciar_tablero (struct tablero *un_tablero)
{
  int columna = 0;
  int fila = 0;
  int i = 0;  

  /* piezas blancas sin contar al peón */
  un_tablero.casillas[7][0] = 'T';
  un_tablero.casillas[7][1] = 'C';
  un_tablero.casillas[7][2] = 'A';
  un_tablero.casillas[7][3] = 'Q';
  un_tablero.casillas[7][4] = 'K';
  un_tablero.casillas[7][5] = 'A';
  un_tablero.casillas[7][6] = 'C';
  un_tablero.casillas[7][7] = 'T';

  /* piezas negras sin contar al peón*/
  un_tablero.casillas[0][0] = 't';
  un_tablero.casillas[0][1] = 'c';
  un_tablero.casillas[0][2] = 'a';
  un_tablero.casillas[0][3] = 'q';
  un_tablero.casillas[0][4] = 'k';
  un_tablero.casillas[0][5] = 'a';
  un_tablero.casillas[0][6] = 'c';
  un_tablero.casillas[0][7] = 't';
	
  /* Inicialización de peones, de acuerdo al orden asignado, negras se ven arriba y blancas abajo (ultimas filas). */
  while (i < 8)
    {
      un_tablero.casillas[6][i] = 'P';
      un_tablero.casillas[1][i] = 'p';
      i = i + 1;
    }

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
