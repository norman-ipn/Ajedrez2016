#include "persistencia.h"

/*Recibe cada movimiento de los jugadores para guardarlos en el archivo*/
int
Guardar_Partida (int jugador, int x_inicial, int y_inicial, int x_final,
                         int y_final, int i)
  {

    char digitos[10][2] = {"0","1","2","3","4","5","6","7","8","9"};
    char NombreAnterior[50] = "PartidasGuardadas.txt";
    char NombreActual[50];

    FILE *fichero = 0;
    fichero = fopen ("PartidasGuardadas.txt", "a");

    if (fichero == 0)
      {				/* no se pudo abrir el archivo*/ 
        return -1;
      }
    fputs ("Partidas Guardadas\n", fichero);

    if (jugador == 1)
      {
        fputs ("Movimiento Jugador 1\n", fichero);
        fputs ("x inicial  y inicial  x final  y final\n", fichero);
        fprintf (fichero, "%d             %d          %d         %d\n",
        x_inicial, y_inicial, x_final, y_final);
      }
    if (jugador == 2)
      {
        fputs ("Movimiento Jugador 2\n", fichero);
        fputs ("x inicial  y inicial  x final  y final\n", fichero);
        fprintf (fichero, "%d             %d          %d         %d\n",
        x_inicial, y_inicial, x_final, y_final);
      }
    fclose (fichero);
    if(i > 0 && i < 10)
      {
        strcpy(NombreActual,"");
        strcat(NombreActual,"PartidasGuardadas");
        strcat(NombreActual,digitos[i]);
        strcat(NombreActual,".txt");
      } 
    else if(i == 10)
      {
        strcpy(NombreActual,"PartidasGuardadas10.txt");
      } 
    else 
      {
        printf ("Memoria llena");
        return i;
      }  
    if (rename (NombreAnterior, NombreActual) == 0)
      {			/*Renombramos el archivo */
        printf ("Archivo Guardado\n");
        printf ("Numero de archivo; %d\n", i);
        i++;
        return i;
      }
    else
      {
        printf ("No se pudo guardar el archivo\n");
        return i;
      }  
}
//Se reduce el numero de lineas. Se incluye string.h en persistencia.h.

void
continuar_partida (char archivo[100], int num)
{
/*Función que abre una partida ya guardada */

  FILE *fichero = 0;
  char tablero[8][8];
  size_t n = 0;
  if (num == 1)
    {
      fichero = fopen ("PartidasGuardadas1.txt", "r");
      if (fichero == 0)
	{
	  printf ("4No se pudo abrir el archivo");
	}
      n = fread (tablero, sizeof (char), 64, fichero);
      if (n == 64)
	{
	  printf ("Se leyeron los datos correctamente");
	}
      fclose (fichero);

    }
  if (num == 2)
    {
      fichero = fopen ("PartidasGuardadas2.txt", "r");
      if (fichero == 0)
	{
	  printf ("4No se pudo abrir el archivo");
	}
      n = fread (tablero, sizeof (char), 64, fichero);
      if (n == 64)
	{
	  printf ("Se leyeron los datos correctamente");
	}
      fclose (fichero);

    }
  if (num == 3)
    {
      fichero = fopen ("PartidasGuardadas3.txt", "r");
      if (fichero == 0)
	{
	  printf ("4No se pudo abrir el archivo");
	}
      n = fread (tablero, sizeof (char), 64, fichero);
      if (n == 64)
	{
	  printf ("Se leyeron los datos correctamente");
	}
      fclose (fichero);
    }
  if (num == 4)
    {
      fichero = fopen ("PartidasGuardadas4.txt", "r");
      if (fichero == 0)
	{
	  printf ("No se pudo abrir el archivo");
	}
      n = fread (tablero, sizeof (char), 64, fichero);
      if (n == 64)
	{
	  printf ("Se leyeron los datos correctamente");
	}
      fclose (fichero);

    }
   if (num == 5)
    {
      fichero = fopen ("PartidasGuardadas5.txt", "r");
      if (fichero == 0)
	{
	  printf ("4No se pudo abrir el archivo");
	}
      n = fread (tablero, sizeof (char), 64, fichero);
      if (n == 64)
	{
	  printf ("Se leyeron los datos correctamente");
	}
      fclose (fichero);
    }
  if (num == 6)
    {
      fichero = fopen ("PartidasGuardadas6.txt", "r");
      if (fichero == 0)
	{
	  printf ("4No se pudo abrir el archivo");
	}
      n = fread (tablero, sizeof (char), 64, fichero);
      if (n == 64)
	{
	  printf ("Se leyeron los datos correctamente");
	}
      fclose (fichero);
    }
  if (num == 7)
    {
      fichero = fopen ("PartidasGuardadas7.txt", "r");
      if (fichero == 0)
	{
	  printf ("4No se pudo abrir el archivo");
	}
      n = fread (tablero, sizeof (char), 64, fichero);
      if (n == 64)
	{
	  printf ("Se leyeron los datos correctamente");
	}
      fclose (fichero);
    }
  if (num == 8)
    {
      fichero = fopen ("PartidasGuardadas8.txt", "r");
      if (fichero == 0)
	{
	  printf ("4No se pudo abrir el archivo");
	}
      n = fread (tablero, sizeof (char), 64, fichero);
      if (n == 64)
	{
	  printf ("Se leyeron los datos correctamente");
	}
      fclose (fichero);
    }
  if (num == 9)
    {
      fichero = fopen ("PartidasGuardadas9.txt", "r");
      if (fichero == 0)
	{
	  printf ("4No se pudo abrir el archivo");
	}
      n = fread (tablero, sizeof (char), 64, fichero);
      if (n == 64)
	{
	  printf ("Se leyeron los datos correctamente");
	}
      fclose (fichero);
    }
  if (num == 10)
    {
      fichero = fopen ("PartidasGuardadas10.txt", "r");
      if (fichero == 0)
	{
	  printf ("4No se pudo abrir el archivo");
	}
      n = fread (tablero, sizeof (char), 64, fichero);
      if (n == 64)
	{
	  printf ("Se leyeron los datos correctamente");
	}
      fclose (fichero);
    }

}


/*Propongo que reciba el jugador para guardar las jugadas de cada juguador por separado y las coordenadas para despues guardarlas en el archivo*/
void
Coordenadas_Recibidas (int jugador, int x_inicial, int y_inicial, int x_final,
		       int y_final)
{
/*En el arreglo use 160 ya que no se puede saber cuantas jugadas va a tener cada partida*/
  int coordenadas[2][160][4];	/*Propongo que en coordenadas[1][][] sean las jugadas del jugador 1 y en coordenadas[2][][] las del 2 */
  int i = 0;
  int j = 0;
  if (jugador == 1)
    {
      for (i = 0; i < 160; i++)
	{
	  for (j = 0; j < 4; j++)
	    {
	      printf ("\nCoordenada Guardada en: %d|%d: ", i + 1, j + 1);
	      coordenadas[0][i][j] = x_inicial;
	      coordenadas[0][i][j] = y_inicial;
	      coordenadas[0][i][j] = x_final;
	      coordenadas[0][i][j] = y_final;
	    }
	}
    }
  if (jugador == 2)
    {				/*Cuando la partida es contra IA se tomaria como jugador 2 */
      for (i = 0; i < 160; i++)
	{
	  for (j = 0; j < 4; j++)
	    {
	      printf ("\nCoordenada Guardada en: %d|%d: ", i + 1, j + 1);
	      coordenadas[1][i][j] = x_inicial;
	      coordenadas[1][i][j] = y_inicial;
	      coordenadas[1][i][j] = x_final;
	      coordenadas[1][i][j] = y_final;
	    }
	}
    }
  else
    {
      return;
      /*Guardar las coordenas de la siguiente manera
         Jugador 1:
         x_inicial y_inicial  x_final  y_final
         posicion arreglo     [0]       [1]       [2]      [3]
         al final mandar el arreglo a Guardar_Partida() para agregar las coordenas al archivo */
    }
  coordenadas[0][0][0]++;
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


/*funcion para conocer a quien le tocaba tirar cuando se guardo el archivo*/
int
turno_jugador (void)
{
  char respuesta[5] = " ";
  int player = 0;
  int i = 0;
  printf ("¿Es tu turno? Si o No \n");
  scanf ("%s", &respuesta[0]);

  while (i < 5)
    {
      if (respuesta[i] == 'S')
	{
	  if (respuesta[i + 1] == 'i')
	    {
	      player = 1;
	      return player;
	    }
	}
      if (respuesta[i] == 'S')
	{
	  if (respuesta[i + 1] == 'I')
	    {
	      player = 1;
	      return player;
	    }
	}
      if (respuesta[i] == 's')
	{
	  if (respuesta[i + 1] == 'i')
	    {
	      player = 1;
	      return player;
	    }
	}
      i = i + 1;
    }

  i = 0;
  while (i < 5)
    {
      if (respuesta[i] == 'N')
	{
	  if (respuesta[i + 1] == 'o')
	    {
	      player = 2;
	      return player;
	    }
	}

      if (respuesta[i] == 'N')
	{
	  if (respuesta[i + 1] == 'O')
	    {
	      player = 2;
	      return player;
	    }
	}

      if (respuesta[i] == 'n')
	{
	  if (respuesta[i + 1] == 'o')
	    {
	      player = 2;
	      return player;
	    }
	  i = i + 1;
	}
/*error por si no hubo coincidencias*/
      return -1;
    }
  return 0;
}
