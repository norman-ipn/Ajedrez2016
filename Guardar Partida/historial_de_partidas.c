/*---------------------CÓDIGO FUENTE DEL HISTORIAL DE PARTIDAS--------------------------

-GUARDA/ACTUALIZA EL REGISTRO DE VICTORIAS DE CADA JUGADOR EN UN ARCHIVO APARTE.
-SE REQUIERE DE UNA FUNCION QUE INDIQUE QUÉ JUGADOR HA GANADO Y CON QUÉ PIEZAS.
-POR LO MIENTRAS ASUMIRÉ QUE EL TIPO DE DATO QUE INDICA EL RESULTADO DE LA PARTIDA
ES UN ENTERO:
	0=victoria de jugador 1 con blancas.
	1=victoria de jugador 1 con negras.
	2=victoria de jugador 2 con blancas.
	3=victoria de jugador 2 con negras.
	4=tablas.
-LA FUNCIÓN SERÁ LLAMADA AL FINAL DE LA PARTIDA.
-EL NOMBRE DE LA FUNCIÓN ES "actualiza_historial".
-SOLO REQUIERE EL RESULTADO DE LA PARTIDA COMO PARÁMETRO DE ENTRADA.
-SE APOYA DE LA FUNCIÓN "obten_hora" PARA INCLUIR LA HORA EN LA QUE SE ACABÓ LA PARTIDA.
*/

#include "obten_hora.h"
#include <stdio.h>
#include <stdlib.h>

void
actualiza_historial (int resultado)
{
  FILE *historial = NULL;
  FILE *t_partidas = NULL;
  FILE *hora = NULL;
  int n_partidas = 0;
  char hora_obtenida[10] = "12:34:56";

/*-------------TRATAMIENTO AL ARCHIVO QUE CONTIENE EL NÚMERO DE PARITDAS----------*/

  t_partidas = fopen ("total_partidas.txt", "r");

  if (t_partidas == NULL)

    {
      t_partidas = fopen ("total_partidas.txt", "w+");
    }

  fscanf (t_partidas, "%d", &n_partidas);
  n_partidas = n_partidas + 1;
  t_partidas = fopen ("total_partidas.txt", "w");
  fprintf (t_partidas, "%d", n_partidas);

  if (t_partidas == NULL)
    {
      printf("\nError al obtener el número de partida\n");
      return;
    }

  fclose (t_partidas);

/*-------------TRATAMIENTO AL ARCHIVO QUE CONTIENE EL HISTORIAL DE RESULTADOS-------*/

  obten_hora ();
  hora = fopen ("hora.txt", "r");
  if (hora == NULL);
  {
    printf("\nError al obtener la hora actual\n");
    return;
  }

  fscanf (hora, "%s", hora_obtenida);
  fclose (hora);

  historial = fopen ("historial.txt", "a+");

  if (historial == NULL)
    {
      printf("\nError al acceder al historial\n");
      return;
    }

  switch (resultado)

    {
    case 0:
      fprintf (historial,
	       "\nFIN DE PARTIDA %d A LAS %s. RESULTADO: VICTORIA DEL JUGADOR 1 CON BLANCAS\n",
	       n_partidas, hora_obtenida);
      break;
    case 1:
      fprintf (historial,
	       "\nFIN DE PARTIDA %d A LAS %s. RESULTADO: VICTORIA DEL JUGADOR 1 CON NEGRAS\n",
	       n_partidas, hora_obtenida);
      break;
    case 2:
      fprintf (historial,
	       "\nFIN DE PARTIDA %d A LAS %s. RESULTADO: VICTORIA DEL JUGADOR 2 CON BLANCAS\n",
	       n_partidas, hora_obtenida);
      break;
    case 3:
      fprintf (historial,
	       "\nFIN DE PARTIDA %d A LAS %s. RESULTADO: VICTORIA DEL JUGADOR 2 CON NEGRAS\n",
	       n_partidas, hora_obtenida);
      break;
    case 4:
      fprintf (historial,
	       "\nFIN DE PARTIDA %d A LAS %s. RESULTADO: TABLAS\n",
	       n_partidas, hora_obtenida);
      break;
    default:
      printf("\nError en resultado de la partida\n");
      return;
    }
  printf("\nHistorial actualizado correctamente\n");
  fclose (historial);
}
