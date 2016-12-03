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
