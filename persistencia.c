#include "persistencia.h"
void
Guardar_Partida (void)
{
/*Crear archivo para guardar jugadas */
  int Numero_Partida = 1;
  FILE *fichero = 0;
  int x_inicial = 0;
  int y_inicial = 0;
  int x_final = 0;
  int y_final = 0;

  fichero = fopen ("PartidasGuardadas.txt", "w+");
  if (fichero == 0)
    {
      /* no se pudo abrir el archivo */
      return -1;
    }

  fprintf (fichero, "Partida numero:%d\n", Numero_Partida);
  fputs ("x inicial  y inicial  x final  y final   Jugador 1\n", fichero);
  fprintf (fichero, "%d             %d          %d         %d\n", x_inicial,
	   y_inicial, x_final, y_final);
  fputs
    ("Coordenada en x inicial  Coordenada en y inicial  Coordenada en x final  Coordenada en y final   Jugador 2\n",
     fichero);
  fclose (fichero);
  printf ("Archivo Guardado\n");
}

/*Propongo que reciba el jugador para guardar las jugadas de cada juguador por separado y las coordenadas para despues guardarlas en el archivo*/
void
Coordenadas_Recibidas (int jugador, int x_inicial, int y_inicial, int x_final,
		       int y_final)
{
/*En el arreglo use 160 ya que no se puede saber cuantas jugadas va a tener cada partida*/
  int coordenadas[2][4][160];	/*Propongo que en coordenadas[1][][] sean las jugadas del jugador 1 y en coordenadas[2][][] las del 2 */
  if (jugador == 1)
    {

    }
  if (jugador == 2)
    {				/*Cuando la partida es contra IA se tomaria como jugador 2 */

    }
  else
    {
      return 0;
      /*Guardar las coordenas de la siguiente manera
         Jugador 1:
         x_inicial y_inicial  x_final  y_final
         posicion arreglo     [0]       [1]       [2]      [3]
         al final mandar el arreglo a Guardar_Partida() para agregar las coordenas al archivo */
    }

}


void
obten_hora (void)
{
  /* Esta función obtiene la hora en que se salvo la partida */
  FILE *archivo = fopen ("hora.txt", "w+");

  time_t tiempo = time (0);
  struct tm *tiempo_local = localtime (&tiempo);
  char hora[9];
  strftime (hora, 9, "%H:%M:%S", tiempo_local);

  fwrite (hora, sizeof (char), 9, archivo);

  fclose (archivo);
}


void
actualiza_historial (int resultado)
{

/* Esta función guarda/atualiza el registro de vistorias de cada jugador en un archivo diferente.
-Se requiere una función del modulo de tablero, que indique que jugador a ganado y con que piezas (blancas o negras)
-Podemos asumir que el tipo de dato que indica el resultado de la partida es un entero y que representa siguiente
        0=victoria de jugador 1 con blancas.
        1=victoria de jugador 1 con negras.
        2=victoria de jugador 2 con blancas.
        3=victoria de jugador 2 con negras.
        4=tablas.
*/

  FILE *historial = NULL;
  FILE *t_partidas = NULL;
  FILE *hora = NULL;
  int n_partidas = 0;
  char hora_obtenida[10] = "12:34:56";

/* Arhivo que contiene el número de partidas jugadasi*/
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
      printf ("\nError al obtener el número de partida\n");
      return;
    }

  fclose (t_partidas);

/*Archivo que contiene el historial de  resultado*/
  obten_hora ();
  hora = fopen ("hora.txt", "r");
  if (hora == NULL);
  {
    printf ("\nError al obtener la hora actual\n");
    return;
  }

  fscanf (hora, "%s", hora_obtenida);
  fclose (hora);

  historial = fopen ("historial.txt", "a+");

  if (historial == NULL)
    {
      printf ("\nError al acceder al historial\n");
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
      printf ("\nError en resultado de la partida\n");
      return;
    }
  printf ("\nHistorial actualizado correctamente\n");
  fclose (historial);
}
