/*=============================================
======= PROGRAMA PRINCIPAL AJEDREZ     ========
=============================================*/
#include <stdio.h>
#include "persistencia.h"
#include "tablero.h"
#include "interfaz.h"

void
iniciar_partida_normal (void)
{

}

int
main (void)
{
  char opcion = '\0';
  struct tablero el_tablero;

  iniciar_tablero (&el_tablero);

  
      mostrar_menu (&el_tablero);
      opcion = capturar_caracter ();

      switch ((int)opcion)
	{
	case 49:
      
    iniciar_partida_normal ();
      
	imprimir_tablero(&el_tablero);
	
      
break;
	}
    return 0;
}
