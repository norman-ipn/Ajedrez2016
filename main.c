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

  do
    {
      mostrar_menu (&el_tablero);
      opcion = capturar_caracter ();

      switch (opcion)
	{
	case OPCION_INICIAR_PARTIDA:
	  iniciar_partida_normal ();
	  break;
	}

    }
  while (opcion != OPCION_SALIR);


  return 0;
}
