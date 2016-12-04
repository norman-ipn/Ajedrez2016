#include "ia.h"
#include "time.h"

/* === Funcion principal del Sistema de AI =======*/
void
tirar_ai(struct tablero *un_tablero)
{
  /* Genera una semilla Random */
  srand (time(NULL));
  
  /* Genera un tablero con numeros que seran mas utiles para nosotros */
  int tableroParaAI [8][8];
  
  /* Rellena el tablero */
  combierteTablero(tableroParaAI, un_tablero);
}


/* ======== Combierte el tablero de letras a numeros ========= */
void
combierteTablero( int tableroParaAI, un_tablero)
  
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
}
