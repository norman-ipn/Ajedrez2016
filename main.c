/*=============================================
======= PROGRAMA PRINCIPAL AJEDREZ     ========
=============================================*/
#include <stdio.h>
#include "persistencia.h"
#include "tablero.h"

struct variables
{
  char tablero[8][8];
  int jugador1 = 0;
  int jugador2 = 0;
  int estado = 1;
  int manual = 0;
};

struct fin_juego
{
  int resultadof = 0;
};

int
main (void)
{
  struct variables V;
  struct fin_juego F;

  struct tablero el_tablero;

  iniciar_tablero (&el_tablero);

  mostrar_menu ();


  /* ===== Bienvenida al Jugador */
  printf (" == BIENVENIDO A AJEDREZ ==\n");
  printf
    ("Si deseas ver las instrucciones para jugar presiona 1, en caso contrario presiona 0: ");
  scanf ("%d", &manual);

  if (V.manual == 1);
  {
    ver_instrucciones (V.tablero);
  }

  modalidad_de_juego ();
  inicializar (V.tablero);

  while (V.estado == 1)		/* estado es un variable que va a ser igual al valor que regrese la funcion analizar si este es diferente de 1 el juego termina */
    {
      printf ("Es turno del jugador 1 \n");
      jugador1 = tirar_blancas (V.tablero);
      while (jugador1 != 0)	/* este while es en caso de que el movimiento de las blancas piezas no sea valido  la funcion tirar_blancas regresara un valor y si este es diferente de cero le  pedira que vuelva a tirar */
	{
	  printf
	    ("Su movimiento no fue válido, por favor inténtelo de nuevo \n ");
	  jugador1 = tirar_blancas (V.tablero);
	}
      printf ("Es turno del jugador 2 \n");
      jugador2 = tirar_negras (V.tablero);

      while (jugador2 != 0)	/* este while es en caso de que el movimiento de las piezas negras no sea valido la funcion tirar_negras regresara un valor y si este es diferente de cero  le pedira que vuelva a tirar */
	{
	  printf
	    ("Su movimiento no fue válido, por favor inténtelo de nuevo \n");
	  jugador2 = tirar_blancas (V.tablero);
	}
      estado = analizar (V.tablero);
    }

  /*if(estado != 1)
     reiniciar(tablero); */

  /*Estas líneas de código son una propuesta para
     incluír la funcion reiniciar (tablero)
     la cual pudiera mandar un printf que diga "Jaque Mate. Ganaron las (blancas/negras)
     y despues se renicie el tablero para jugar de nuevo"
     EN CONSTRUCCION 
   */

  actualiza_historial (F.resultadof);

  return 0;
}
