#include <stdio.h>
#include <stdlib.h>
#include <sys/time.h>
#include "ia.h"
#include "interfaz.h"
#include "tablero.h"
#include "piezas.h"
#include "persistencia.h"	/*Bibloteca que se requiere para la opción de cargar partida */


char
capturar_caracter (void)
{

  char buffer[128];
  fflush (stdin);
  fgets (buffer, 4, stdin);

  return buffer[0];

}

void
imprimir (struct tablero *un_tablero)
{
  int a = 0;
  int x = 0;			/* variable de control de la posición del tablero en x */
  int y = 0;			/* variable de control de la posición del tablero en y */
  int f = 8;

  char Partesuperior[] =
    "\u250F\u2501\u2501\u2501\u2533\u2501\u2501\u2501\u2533\u2501\u2501\u2501\u2533\u2501\u2501\u2501\u2533\u2501\u2501\u2501\u2533\u2501\u2501\u2501\u2533\u2501\u2501\u2501\u2533\u2501\u2501\u2501\u2513";
  char cuerpo[] =
    "\u2523\u2501\u2501\u2501\u254B\u2501\u2501\u2501\u254B\u2501\u2501\u2501\u254B\u2501\u2501\u2501\u254B\u2501\u2501\u2501\u254B\u2501\u2501\u2501\u254B\u2501\u2501\u2501\u254B\u2501\u2501\u2501\u252B ";
  char parteinferior[] =
    "\u2517\u2501\u2501\u2501\u253b\u2501\u2501\u2501\u253b\u2501\u2501\u2501\u253b\u2501\u2501\u2501\u253b\u2501\u2501\u2501\u253b\u2501\u2501\u2501\u253b\u2501\u2501\u2501\u253b\u2501\u2501\u2501\u251b";

/* impresion del tablero de ajedrez*/
  printf ("\n");
  printf ("    ");


  printf ("%s", Partesuperior);
  while (y < 7)
    {
      printf ("\n");
      printf ("  %d ", f);
      while (a < 8)
	{
	  printf ("\u2503 %c ", un_tablero->casillas[y][x]);
	  /*\u2503 corresponde a una linea vertical */
	  a = a + 1;
	  x = x + 1;

	}
      printf ("\u2503");
      printf ("\n");
      printf ("   ");
      a = 0;
      printf (" %s ", cuerpo);
      a = 0;
      x = 0;
      y = y + 1;
      f = f - 1;
    }
  printf ("\n");
  printf ("  %d ", f);
  while (a < 8)
    {
      printf ("\u2503 %c ", un_tablero->casillas[y][x]);
      a = a + 1;
      x = x + 1;
    }
  printf ("\u2503");
  printf ("\n");
  printf ("    ");
  a = 0;
  printf ("%s", parteinferior);
  printf ("\n");
  printf ("    ");
  a = 0;
  while (a < 8)
    {
      printf ("  %c ", 65 + a);
      a = a + 1;
    }
  /*printf                Esto lo dejo por si acaso 
     ("\nTurno de....  Ingrese su movimiento\n De la forma (x1 y1   x2 y2");

     scanf ("%d %d %d %d", &x1, &y1, &x2, &y2);
     movimiento_valido (un_tablero.casillas, x1, y1, x2, y2);
   */
}



/*Esta función despliega un menú de opciones durante la partida*/
int
jugar (struct tablero *un_tablero, int tipo_juego)
{
  int i = 0;
  char opcion = '\0';
  FILE *registro = NULL;
  int letra = 0;
  char x_pieza = '0';
  int y_pieza = 0;
  char x_objetivo = '0';
  int y_objetivo = 0;
  int jugador = 0;
  char columnas[16] =
     { 'A', 'B', 'C', 'D', 'E', 'F', 'G', 'H', 'a', 'b', 'c', 'd', 'e', 'f',
     'g', 'h'
     }; 
  char entrada[2] = "0";
  int x_piezad = 0;
  int x_objetivod = 0;
  char *respuesta = 0;
  int turno = 1;
  struct timeval ti, tf;
  double tiempo;

  gettimeofday (&ti, NULL);	//Comienza timer

  printf ("Comienza el juego\n\n");
  while (1 == 1)
    {
      
      if (turno % 2 == 1)
	{
	  printf ("Es turno de las blancas\n\n");
	}
      else
	{
	  printf ("Es turno de las negras\n\n");
	}
      imprimir (un_tablero);
      printf ("\n\n¿Qué desea hacer a continuación?\n\n");

      printf ("Para realizar un movimiento introduzca \"m\"\n");
      printf ("Para guardar la partida introduzca \"g\"\n");
      printf ("Para reiniciar la partida actual introduzca \"n\"\n");
      printf ("Para cancelar el último movimiento introduzca \"c\"\n");
      printf ("Para ver el registro de movimientos introduzca \"r\"\n");
      printf ("Para salir de la partida actual introduzca \"s\"\n\n");
      //scanf ("%c", &opcion);
      if (turno % 2 == 0 && tipo_juego == 2)
	{
	  opcion = 'm';
	}
      else
	{
	  opcion = capturar_caracter ();
	}
      gettimeofday (&tf, NULL);	// Instante final
      tiempo =
	(tf.tv_sec - ti.tv_sec) * 1000 + (tf.tv_usec - ti.tv_usec) / 1000.0;
      if (tiempo > 180000.0f)
	{
	  printf
	    ("Te pasaste del tiempo asignado para ti, se hara una jugada al azar\n");
	  jugada_al_azar (un_tablero, turno);	// supongo que no necesitamos un *
	  turno++;
	  break;
	}

      switch (opcion)
	{
	case 'm':
	  system ("clear");
	  if (tipo_juego == 2)
	    {
	      responder_jugada (un_tablero, turno, respuesta, x_piezad,
				y_pieza);
	      turno++;
	      break;
	    }
	  //mover_piezas (un_tablero);
	  //break;
//------SOLICITUD DE DATOS DE LAS PIEZAS------

	  printf("\nINGRESE LA -COLUMNA- DE LA PIEZA QUE DESEA MOVER [A-H]: ");
          x_pieza = capturar_caracter();
	  printf ("\nINGRESE LA -FILA- DE LA PIEZA QUE DESEA MOVER [1-8]: ");
	  fflush(stdin);
	  fgets (entrada, 2, stdin);
	  sscanf (entrada, "%d", &y_pieza);
	  printf ("\nINGRESE LA -COLUMNA- DEL LUGAR OBJETIVO  [A-H]: ");
          x_objetivo = capturar_caracter();
	  printf ("\nINGRESE LA -FILA- DEL LUGAR OBJETIVO [1-8]: ");
	  fflush(stdin);
	  fgets (entrada, 2, stdin);
	  sscanf (entrada, "%d", &y_objetivo);
	  printf ("\nCONFIRME CON SU MUNERO DE JUGADOR [1 o 2]:  ");
	  fflush(stdin);
	  fgets (entrada, 2, stdin);
	  sscanf (entrada, "%d", &jugador);

//--------TRATAMIENTO DE LOS DATOS--------
	  for (i = 0; i < 8; i++)
	    {
	      if (x_pieza == columnas[i] || x_pieza == columnas[i + 8])
		{
		  x_piezad = i;
		}

	      if (x_objetivo == columnas[i] || x_objetivo == columnas[i + 8])
		{
		  x_objetivod = i;
		}
	    }

	  y_pieza = y_pieza - 1;
	  y_objetivo = y_objetivo - 1;

	  Guardar_Partida (jugador, x_piezad, y_pieza, x_objetivod,
			   y_objetivo, 1);
          mover_piezas (un_tablero);
	  turno++;
	  break;

	case 'g':
	  system ("clear");
	  if (jugador == 0)
	    {
	      printf
		("\n----------------**No se han realizado jugadas**------------------\n");
	    }
	  else
	    {
	      Guardar_Partida (jugador, x_piezad, y_pieza, x_objetivod,
			       y_objetivo, 1);
	      printf
		("\n--------------Último movimiento guardado :D-------------\n");
	    }
	  break;

	case 'n':
	  system ("clear");
	  printf ("Comienza de nuevo el juego\n\n");
	  iniciar_tablero (un_tablero);
	  break;

	case 'c':
	  system ("clear");
	  x_piezad = x_objetivod;
	  x_objetivod = x_piezad;

	  y_pieza = y_objetivo;
	  y_objetivo = y_pieza;

	  invertir_tablero (un_tablero);
	  Guardar_Partida (jugador, x_piezad, y_pieza, x_objetivod,
			   y_objetivo, 1);
	  break;

	case 'r':
	  system ("clear");
	  registro = fopen ("PartidasGuardadas.txt", "r");
	  if (registro == NULL)
	    {
	      printf ("Error al obtener el registro de movimientos");
	      break;
	    }
	  else
	    {
	      while (letra != EOF)
		{
		  letra = fgetc (registro);
		  putchar (letra);
		}
	      break;
	    }

	case 's':
	  system ("clear");
	  printf ("Ha salido de la partida actual\n\n");
	  return 0;
	  break;

	default:
	  system ("clear");
	  printf ("La opción no es válida\n\n");
	  break;
	}


    }
  return -1;			//La funcion necesita un retorno, omiti el cero porque no sé si se ocupe el retorno, si no por favor de cambiar a void
}

/*Esta función imprime el tablero en pantalla. Recibe la estructura definida en tablero.h
void
imprimir_tablero (struct tablero *tablero)
{
  int i = 0;
  int j = 8;
  char aux = 'A';

  printf ("\n\n");

  while (j > 0)
    {
      if (i == 0)
	{
	  printf (" %c ||", (aux + (j - 1)));
	}
      printf ("  %c  |", tablero->casillas[j - 1][i]);
      i = i + 1;

      if (i == 8)
	{
	  if (j != 1)
	    {
	      printf ("\n");
	      printf ("----");

	      i = 0;

	      while (i < 8)
		{
		  printf ("------");

		  i = i + 1;
		}
	    }
	  if (j == 1)
	    {
	      printf ("\n");
	      printf ("=====");

	      i = 0;

	      while (i < 8)
		{
		  printf ("======");

		  i = i + 1;
		}
	    }
	  printf ("\n");
	  i = 0;
	  j = j - 1;
	}
    }

  j = 8;
  i = 0;
  printf (">:v|| ");
  while (j > 0)
    {
      aux = '1';
      printf (" %c  | ", (aux + i));
      j = j - 1;
      i = i + 1;
    }
  printf ("\n\n");
																																																    																								    												    						    			    	                 }*///Lo comenté porque ya no se va a usar esta función.
/* Inicio de la sección del manual */
void
reglas_alfil (void)
{
	
  int x = 0;			
  int y = 0;		
  int f = 8;

  char Partesuperior[] =
    "\u250F\u2501\u2501\u2501\u2533\u2501\u2501\u2501\u2533\u2501\u2501\u2501\u2533\u2501\u2501\u2501\u2533\u2501\u2501\u2501\u2533\u2501\u2501\u2501\u2533\u2501\u2501\u2501\u2533\u2501\u2501\u2501\u2513";
  char cuerpo[] =
    "\u2523\u2501\u2501\u2501\u254B\u2501\u2501\u2501\u254B\u2501\u2501\u2501\u254B\u2501\u2501\u2501\u254B\u2501\u2501\u2501\u254B\u2501\u2501\u2501\u254B\u2501\u2501\u2501\u254B\u2501\u2501\u2501\u252B ";
  char parteinferior[] =
    "\u2517\u2501\u2501\u2501\u253b\u2501\u2501\u2501\u253b\u2501\u2501\u2501\u253b\u2501\u2501\u2501\u253b\u2501\u2501\u2501\u253b\u2501\u2501\u2501\u253b\u2501\u2501\u2501\u253b\u2501\u2501\u2501\u251b";


  printf
    ("\n El Alfil se mueve de manera diagonal hacia las demás casilla pero esta pieza solo se moverá hacia el color de la casilla que le corresponde, ya sea blancas o negras, por lo que es recomendable usarlo con estrategia. \n");

  printf ("\n");
  printf ("    ");


  printf ("%s", Partesuperior);
  while (y < 7)
    {
      printf ("\n");
      printf ("  %d ", f);
      if (y == 0)
	printf
	  ("\u2503   \u2503 \u23F9 \u2503   \u2503   \u2503   \u2503   \u2503   \u2503   \u2503");
      if (y == 1)
	printf
	  ("\u2503   \u2503   \u2503 \u23F9 \u2503   \u2503   \u2503   \u2503   \u2503   \u2503");
      if (y == 2)
	printf
	  ("\u2503   \u2503   \u2503   \u2503 \u23F9 \u2503   \u2503   \u2503   \u2503 \u23F9 \u2503");
      if (y == 3)
	printf
	  ("\u2503   \u2503   \u2503   \u2503   \u2503 \u23F9 \u2503   \u2503 \u23F9 \u2503   \u2503");
      if (y == 4)
	printf
	  ("\u2503   \u2503   \u2503   \u2503   \u2503   \u2503 \u265D \u2503   \u2503   \u2503");
      if (y == 5)
	printf
	  ("\u2503   \u2503   \u2503   \u2503   \u2503 \u23F9 \u2503   \u2503 \u23F9 \u2503   \u2503");
      if (y == 6)
	printf
	  ("\u2503   \u2503   \u2503   \u2503 \u23F9 \u2503   \u2503   \u2503   \u2503 \u23F9 \u2503");
      printf ("\n");
      printf ("   ");
      printf (" %s ", cuerpo);
      x = 0;
      y = y + 1;
      f = f - 1;
    }

  printf ("\n");
  printf
    ("    \u2503   \u2503   \u2503 \u23F9 \u2503   \u2503   \u2503   \u2503   \u2503   \u2503");

  printf ("\n");
  printf ("    %s", parteinferior);
  printf ("\n");
  printf ("    ");

  while (x < 8)
    {
      printf ("  %c ", 65 + x);
      x = x + 1;
    }
/*
  printf
    ("\n El Alfil se mueve de manera diagonal hacia las demás casillas cuanto quiera, esta pieza solo se moverá por un solo color de casillas, así que es recomendable usarlo con estrategia. \n");

  printf ("  A B C D E F G H  \n");
  printf (" |================|\n");
  printf ("8|%c|%c|%c|%c|%c|%c|%c|%c|\n", ' ', 'X', ' ', 'X', ' ', 'X', ' ',
	  'O');
  printf ("7|%c|%c|%c|%c|%c|%c|%c|%c|\n", 'O', ' ', 'X', ' ', 'X', ' ', 'O',
	  ' ');
  printf ("6|%c|%c|%c|%c|%c|%c|%c|%c|\n", ' ', 'O', ' ', 'X', ' ', 'O', ' ',
	  'X');
  printf ("5|%c|%c|%c|%c|%c|%c|%c|%c|\n", 'X', ' ', 'O', ' ', 'O', ' ', 'X',
	  ' ');
  printf ("4|%c|%c|%c|%c|%c|%c|%c|%c|\n", ' ', 'X', ' ', 'A', ' ', 'X', ' ',
	  'X');
  printf ("3|%c|%c|%c|%c|%c|%c|%c|%c|\n", 'X', ' ', 'O', ' ', 'O', ' ', 'X',
	  ' ');
  printf ("2|%c|%c|%c|%c|%c|%c|%c|%c|\n", ' ', 'O', ' ', 'X', ' ', 'O', ' ',
	  'X');
  printf ("1|%c|%c|%c|%c|%c|%c|%c|%c|\n", 'O', ' ', 'X', ' ', 'X', ' ', 'O',
	  ' ');
  printf (" |================|\n");*/
  getchar ();
  return;
}

void
reglas_basicas (void)
{
  printf
    ("\n El Ajedrez es un juego de estrategia en el que dos jugadores hacen uso de piezas con distintos tipos de movimientos con el objetivo de acorralar al rey de tal modo que este no pueda moverse a ningún lugar mientras esta siendo amenazado, lo que se conoce como jaque mate. \n ");
  while (getchar () != '\n');
  printf
    ("\n El juego comienza en un tablero de 8 x 8 casillas en las que los jugadores deben de mover sus piezas con el fin de darle jaque mate al rey adversario.\n");
  getchar ();
  return;
}

void
reglas_caballo (void)
{
  printf
    ("\n El caballo es una pieza útil para pasar lineas defensivas del oponente, se mueve caminando 3 casillas trazando L's en su camino.\n");
  printf
    ("\n Tiene la ventaja de que puede saltar las piezas, ya sean aliadas o enemigas. \n");


  printf ("  A B C D E F G H  \n");
  printf (" |================|\n");
  printf ("8|%c|%c|%c|%c|%c|%c|%c|%c|\n", ' ', 'X', ' ', 'X', ' ', 'X', ' ',
	  'X');
  printf ("7|%c|%c|%c|%c|%c|%c|%c|%c|\n", 'X', ' ', 'X', ' ', 'X', ' ', 'X',
	  ' ');
  printf ("6|%c|%c|%c|%c|%c|%c|%c|%c|\n", ' ', 'X', 'O', 'X', 'O', 'X', ' ',
	  'X');
  printf ("5|%c|%c|%c|%c|%c|%c|%c|%c|\n", 'X', 'O', 'X', ' ', 'X', 'O', 'X',
	  ' ');
  printf ("4|%c|%c|%c|%c|%c|%c|%c|%c|\n", ' ', 'X', ' ', 'C', ' ', 'X', ' ',
	  'X');
  printf ("3|%c|%c|%c|%c|%c|%c|%c|%c|\n", 'X', 'O', 'X', ' ', 'X', 'O', 'X',
	  ' ');
  printf ("2|%c|%c|%c|%c|%c|%c|%c|%c|\n", ' ', 'X', 'O', 'X', 'O', 'X', ' ',
	  'X');
  printf ("1|%c|%c|%c|%c|%c|%c|%c|%c|\n", 'X', ' ', 'X', ' ', 'X', ' ', 'X',
	  ' ');
  printf (" |================|\n");
  getchar ();
  return;
}

void
reglas_enroque (void)
{

  printf
    ("\n El Enroque un movimiento que realiza el rey con una de las torres, en el que cambian de posicion de manera conjunta. El rey se movera 2 casillas hacia la dirreción\n");
  printf
    ("\n de la torre con la que enroca y la torre pasará a colocarse al lado del rey en la casilla inversa a la dirección a la cual el rey se haya desplazado.\n");

  printf ("  A B C D E F G H  \n");
  printf (" |================|\n");
  printf ("2|%c|%c|%c|%c|%c|%c|%c|%c|\n", ' ', 'X', ' ', 'X', ' ', 'X', ' ',
	  'X');
  printf ("1|%c|%c|%c|%c|%c|%c|%c|%c|\n", 'T', ' ', 'X', ' ', 'K', ' ', 'X',
	  'T');
  printf (" |================|\n");

  printf ("  A B C D E F G H  \n");
  printf (" |================|\n");
  printf ("2|%c|%c|%c|%c|%c|%c|%c|%c|\n", ' ', 'X', ' ', 'X', ' ', 'X', ' ',
	  'X');
  printf ("1|%c|%c|%c|%c|%c|%c|%c|%c|\n", 'X', ' ', 'K', 'T', 'X', ' ', 'X',
	  'T');

  printf
    ("\n El rey se desplaza dos casillas a la izquierda y la torre se pone a su lado derecho. \n");

  printf ("  A B C D E F G H  \n");
  printf (" |================|\n");
  printf ("2|%c|%c|%c|%c|%c|%c|%c|%c|\n", ' ', 'X', ' ', 'X', ' ', 'X', ' ',
	  'X');
  printf ("1|%c|%c|%c|%c|%c|%c|%c|%c|\n", 'T', ' ', 'X', ' ', 'X', 'T', 'K',
	  ' ');

  printf
    ("\n El rey se desplaza dos casillas a la derecha y la torre se pone a su lado izquierdo.  \n");
  printf
    ("\n Cabe decir que el Enroque solo se podrá realizar cuando se cumplan todas estas condiciones:  \n");
  printf
    ("\n 1:Tanto el Rey como la Torre no deberán haberse movido hasta el momento en el que se ejecute el enroque. \n");
  printf
    ("\n 2:Solo se podrá realizar si ninguna de las piezas está amenazada por una del rival. \n");
  printf
    ("\n 3:Ninguna de las casillas por las que pasen deberá estar amenazada por una pieza enemiga.\n");
  printf
    ("\n 4:No debe de ver ninguna pieza en las casillas donde se va hacer el enroque, tiene de estar despejado.\n");
  getchar ();
  return;
}

void
reglas_jaque (void)
{
  printf
    ("\n Para dar un jaque el rey deberá ser amenzado por una pieza rival provocando que el jugador esté obligado a salir de esta situacion, para salir del jaque el jugador puede mover al rey a una nueva posicion o, mover una pieza con el fin de obstruir la amenaza y que el rey deje de estar en jaque. \n");

  printf ("  A B C D E F G H  \n");
  printf (" |================|\n");
  printf ("8|%c|%c|%c|%c|%c|%c|%c|%c|\n", ' ', 'X', ' ', 'C', ' ', 'X', ' ',
	  'X');
  printf ("7|%c|%c|%c|%c|%c|%c|%c|%c|\n", 'X', ' ', 'K', ' ', 'X', ' ', 'X',
	  ' ');
  printf ("6|%c|%c|%c|%c|%c|%c|%c|%c|\n", ' ', 'X', ' ', 'X', ' ', 'X', ' ',
	  'X');
  printf ("5|%c|%c|%c|%c|%c|%c|%c|%c|\n", 'X', ' ', 'X', ' ', 'X', ' ', 'X',
	  ' ');
  printf ("4|%c|%c|%c|%c|%c|%c|%c|%c|\n", ' ', 'X', ' ', 'X', ' ', 'X', ' ',
	  'X');
  printf ("3|%c|%c|%c|%c|%c|%c|%c|%c|\n", 'X', ' ', 'X', ' ', 'X', ' ', 'X',
	  ' ');
  printf ("2|%c|%c|%c|%c|%c|%c|%c|%c|\n", ' ', 'X', ' ', 'X', ' ', 'X', ' ',
	  'X');
  printf ("1|%c|%c|%c|%c|%c|%c|%c|%c|\n", 'X', ' ', 't', ' ', 'X', ' ', 'X',
	  ' ');
  printf (" |================|\n");
  getchar ();
  return;
}

void
reglas_jaque_mate (void)
{
  printf
    ("\n En este caso, el Rey se encuentra amenazado por la torre y al no poder moverse a otra posición sin ser amenazado debido a la Dama, esto es el fin de la partida.\n");

  printf ("  A B C D E F G H  \n");
  printf (" |================|\n");
  printf ("8|%c|%c|%c|%c|%c|%c|%c|%c|\n", 'k', 'X', ' ', 'X', ' ', 'X', ' ',
	  'T');
  printf ("7|%c|%c|%c|%c|%c|%c|%c|%c|\n", 'X', ' ', 'X', ' ', 'X', ' ', 'X',
	  ' ');
  printf ("6|%c|%c|%c|%c|%c|%c|%c|%c|\n", 'Q', 'X', ' ', 'X', ' ', 'X', ' ',
	  'X');
  printf ("5|%c|%c|%c|%c|%c|%c|%c|%c|\n", 'X', ' ', 'X', ' ', 'X', ' ', 'X',
	  ' ');
  printf ("4|%c|%c|%c|%c|%c|%c|%c|%c|\n", ' ', 'X', ' ', 'X', ' ', 'X', ' ',
	  'X');
  printf ("3|%c|%c|%c|%c|%c|%c|%c|%c|\n", 'X', ' ', 'X', ' ', 'X', ' ', 'X',
	  ' ');
  printf ("2|%c|%c|%c|%c|%c|%c|%c|%c|\n", ' ', 'X', ' ', 'X', ' ', 'X', ' ',
	  'X');
  printf ("1|%c|%c|%c|%c|%c|%c|%c|%c|\n", 'X', ' ', 'K', ' ', 'X', ' ', 'X',
	  ' ');
  printf (" |================|\n");
  getchar ();
  return;
}

void
reglas_peon (void)
{

  printf
    ("Los peones son las principales unidades para cubrir terreno, no son muy fuertes y están pensados más para ocupar posiciones que para capturar, se mueven de la siguiente forma: \n");
  printf
    ("\n El peon puede avanzar 2 casillas y terminar en el caracter # solo si se encuentra en su casilla de arranque. Después de esto, tendrá que avanzar 1 casilla a la vez \n");
  printf
    (" O puede hacerlo desde el inicio. Los 'O' representan las posiciones en las que si una pieza enemiga se encuentra ahá, esta puede ser capturada.\n");

  printf ("  A B C D E F G H  \n");
  printf (" |================|\n");
  printf ("8|%c|%c|%c|%c|%c|%c|%c|%c|\n", ' ', 'X', ' ', 'X', ' ', 'X', ' ',
	  'X');
  printf ("7|%c|%c|%c|%c|%c|%c|%c|%c|\n", 'X', ' ', 'X', ' ', 'X', ' ', 'X',
	  ' ');
  printf ("6|%c|%c|%c|%c|%c|%c|%c|%c|\n", ' ', 'X', ' ', 'X', ' ', 'X', ' ',
	  'X');
  printf ("5|%c|%c|%c|%c|%c|%c|%c|%c|\n", 'X', ' ', 'X', ' ', 'X', ' ', 'X',
	  ' ');
  printf ("4|%c|%c|%c|%c|%c|%c|%c|%c|\n", ' ', 'X', ' ', '#', ' ', 'X', ' ',
	  'X');
  printf ("3|%c|%c|%c|%c|%c|%c|%c|%c|\n", 'X', ' ', 'O', '%', 'O', ' ', 'X',
	  ' ');
  printf ("2|%c|%c|%c|%c|%c|%c|%c|%c|\n", ' ', 'X', ' ', 'P', ' ', 'X', ' ',
	  'X');
  printf ("1|%c|%c|%c|%c|%c|%c|%c|%c|\n", 'X', ' ', 'X', ' ', 'X', ' ', 'X',
	  ' ');
  printf (" |================|\n");

  printf
    ("\n NOTA: Si un peon consigue llegar hasta la linea del fondo del adversario, este podrá convertirse en cualquier unidad que se desee, excepto el rey. \n");
  getchar ();
  return;
}

void
reglas_rey (void)
{

  printf
    ("El Rey es la pieza más importante de un jugador, si es acorralado significará la derrota para el jugador, su movimiento es igual al de la reina con la particularidad de que solo se moverá 1 casilla a la vez.\n");

  printf ("  A B C D E F G H  \n");
  printf (" |================|\n");
  printf ("8|%c|%c|%c|%c|%c|%c|%c|%c|\n", ' ', 'X', ' ', 'X', ' ', 'X', ' ',
	  'X');
  printf ("7|%c|%c|%c|%c|%c|%c|%c|%c|\n", 'X', ' ', 'X', ' ', 'X', ' ', 'X',
	  ' ');
  printf ("6|%c|%c|%c|%c|%c|%c|%c|%c|\n", ' ', 'X', ' ', 'X', ' ', 'X', ' ',
	  'X');
  printf ("5|%c|%c|%c|%c|%c|%c|%c|%c|\n", 'X', ' ', 'O', 'O', 'O', ' ', 'X',
	  ' ');
  printf ("4|%c|%c|%c|%c|%c|%c|%c|%c|\n", ' ', 'X', 'O', 'K', 'O', 'X', ' ',
	  'X');
  printf ("3|%c|%c|%c|%c|%c|%c|%c|%c|\n", 'X', ' ', 'O', 'O', 'O', ' ', 'X',
	  ' ');
  printf ("2|%c|%c|%c|%c|%c|%c|%c|%c|\n", ' ', 'X', ' ', 'X', ' ', 'X', ' ',
	  'X');
  printf ("1|%c|%c|%c|%c|%c|%c|%c|%c|\n", 'X', ' ', 'X', ' ', 'X', ' ', 'X',
	  ' ');
  printf (" |================|\n");
  getchar ();
  return;
}

void
reglas_reyna (void)
{
  printf
    ("\n La Reina o Dama es la pieza más poderosa de un jugador, combina la forma de movimiento de la torre y el alfil, y al igual que estas dos, puede moverse cuanto quiera.\n");

  printf ("  A B C D E F G H  \n");
  printf (" |================|\n");
  printf ("8|%c|%c|%c|%c|%c|%c|%c|%c|\n", ' ', 'X', ' ', 'O', ' ', 'X', ' ',
	  'O');
  printf ("7|%c|%c|%c|%c|%c|%c|%c|%c|\n", 'O', ' ', 'X', 'O', 'X', ' ', 'O',
	  ' ');
  printf ("6|%c|%c|%c|%c|%c|%c|%c|%c|\n", ' ', 'O', ' ', 'O', ' ', 'O', ' ',
	  'X');
  printf ("5|%c|%c|%c|%c|%c|%c|%c|%c|\n", 'X', ' ', 'O', 'O', 'O', ' ', 'X',
	  ' ');
  printf ("4|%c|%c|%c|%c|%c|%c|%c|%c|\n", 'O', 'O', 'O', 'R', 'O', 'O', 'O',
	  'O');
  printf ("3|%c|%c|%c|%c|%c|%c|%c|%c|\n", 'X', ' ', 'O', 'O', 'O', ' ', 'X',
	  ' ');
  printf ("2|%c|%c|%c|%c|%c|%c|%c|%c|\n", ' ', 'O', ' ', 'O', ' ', 'O', ' ',
	  'X');
  printf ("1|%c|%c|%c|%c|%c|%c|%c|%c|\n", 'O', ' ', 'X', 'O', 'X', ' ', 'O',
	  ' ');
  printf (" |================|\n");
  getchar ();
  return;
}

void
reglas_torre (void)
{

  printf
    ("\n Las Torres son de las unidades más importantes. Se mueven horizontal y verticalmente cuanto quieran y pueden hacer un movimiento con el rey conocido como Enroque. \n");
  printf ("  A B C D E F G H  \n");
  printf (" |================|\n");
  printf ("8|%c|%c|%c|%c|%c|%c|%c|%c|\n", ' ', 'X', ' ', 'O', ' ', 'X', ' ',
	  'X');
  printf ("7|%c|%c|%c|%c|%c|%c|%c|%c|\n", 'X', ' ', 'X', 'O', 'X', ' ', 'X',
	  ' ');
  printf ("6|%c|%c|%c|%c|%c|%c|%c|%c|\n", ' ', 'X', ' ', 'O', ' ', 'X', ' ',
	  'X');
  printf ("5|%c|%c|%c|%c|%c|%c|%c|%c|\n", 'X', ' ', 'X', 'O', 'X', ' ', 'X',
	  ' ');
  printf ("4|%c|%c|%c|%c|%c|%c|%c|%c|\n", 'O', 'O', 'O', 'T', 'O', 'O', 'O',
	  'O');
  printf ("3|%c|%c|%c|%c|%c|%c|%c|%c|\n", 'X', ' ', 'X', 'O', 'X', ' ', 'X',
	  ' ');
  printf ("2|%c|%c|%c|%c|%c|%c|%c|%c|\n", ' ', 'X', ' ', 'O', ' ', 'X', ' ',
	  'X');
  printf ("1|%c|%c|%c|%c|%c|%c|%c|%c|\n", 'X', ' ', 'X', 'O', 'X', ' ', 'X',
	  ' ');
  printf (" |================|\n");

  getchar ();
  return;
}

void
manual (void)
{
  char comando = '0';
  char orden = '0';

  //Bienvenida a Instrucciones 
  printf
    ("\n ¡Bienvenido a Ajedrez-ESCOM!, A continuación se presentarán las instrucciones del juego por si eres nuevo en el ajedrez y deseas aprender las reglas básicas de juego. \n");
  printf
    ("Presiona Enter cada vez que termine una explicación para continuar\n");

  //Vamos a repetir este codigo hasta que el usuario quiera
  do
    {
      printf
	("\n\n\n\n\nSelecciona una opción de la que quieras saber: 1:Desplegar todas las instrucciones\n2:Caballo\n3:Torre\n4:Peon\n5:Reyna\n6:Alfil\n7:Rey\n8:Enroque\n9:Condiciones de jaque\n0:Condiciones de Jaque-Mate. \n");
      comando = getchar ();

      switch (comando)
	{
	case '1':
	  reglas_basicas ();
	  reglas_torre ();
	  reglas_enroque ();
	  reglas_peon ();
	  reglas_caballo ();
	  reglas_alfil ();
	  reglas_reyna ();
	  reglas_rey ();
	  reglas_jaque ();
	  reglas_jaque_mate ();
	  break;
	case '2':
	  reglas_caballo ();
	  break;
	case '3':
	  reglas_torre ();
	  break;
	case '4':
	  reglas_peon ();
	  break;
	case '5':
	  reglas_reyna ();
	  break;
	case '6':
	  reglas_alfil ();
	  break;
	case '7':
	  reglas_rey ();
	  break;
	case '8':
	  reglas_enroque ();
	  break;
	case '9':
	  reglas_jaque ();
	  break;
	case '0':
	  reglas_jaque_mate ();
	  break;
	case '\n':
	  break;
	default:
	  printf ("\n Opción inválida.\n");
	  break;
	}

      //Se le da la opcion de volver y ver mas instrucciones
      printf
	("\n Si quieres ver otra información presiona cualquier tecla\n");
      printf
	("\n Si esa es toda la informacion que necesitas y quieres salir de las intrucciones presiona ENTER\n");

      orden = getchar ();
    }
  while (orden != '\n');

}

/* Fin de la sección del manual */

void
setUp (void)
{
  char confirmacion = ' ';
  char buffer[4];
  system ("clear");
  printf
    ("Para mostrar las animaciones\n  necesitamos que instales un programa por nosotros,\n  su nombre es figlet, puedes instalarlo usando:\n\n  sudo apt-get install figlet\n\n  o bien podemos hacerlo por ti, presiona s para instalar(se te pedira tu contraseña)\n  o cualquier otra para no hacerlo, podras hacerlo despues. :)\n");
  fgets (buffer, 4, stdin);
  sscanf (buffer, "%c", &confirmacion);
  system ("clear");
  if (confirmacion == 's' || confirmacion == 'S')
    {
      printf ("Gracias, se instalará a continuación");
      system ("sudo apt-get install figlet");
    }
  system ("clear");
  printf ("Gracias por elegir este juego, disfrutalo");
  sleep (3);
}


void
mostrar_animacion (int n)
{
  int i = 0;

  switch (n)
    {
    case ANIMACION_JAQUE:
      for (i = 0; i < 2; i++)
	{
	  system ("clear");
	  system ("figlet 'Jaque!!'");
	  sleep (1);
	  system ("clear");
	}
      break;
    case ANIMACION_JAQUE_MATE:
      for (i = 0; i < 4; i++)
	{
	  system ("clear");
	  system ("figlet 'JaqueMate!!'");
	  sleep (1);
	  system ("clear");
	}
      break;
    case ANIMACION_GANA_JUGADOR_1:
      for (i = 0; i < 3; i++)
	{
	  system ("clear");
	  system ("figlet 'Jugador 1 Gano!!'");
	  sleep (1);
	  system ("clear");
	}
      break;
    case ANIMACION_GANA_JUGADOR_2:
      for (i = 0; i < 3; i++)
	{
	  system ("clear");
	  system ("figlet 'Jugador 2 Gano!!'");
	  sleep (1);
	  system ("clear");
	}
      break;
    case ANIMACION_BIENVENIDA:
      system ("clear");
      system ("figlet 'Bienvenido'");
      sleep (2);
      system ("clear");
      break;
    case ANIMACION_DESPEDIDA:
      system ("clear");
      system ("figlet 'Adios :)'");
      sleep (2);
      system ("clear");
      break;
    case 7:
      system ("clear");
      system ("figlet '.:Bienvenido:.'");
      sleep (2);
      system ("clear");
      break;
    case 8:
      for (i = 0; i < 5; i++)
	{
	  system ("clear");
	  system ("figlet 'Cargando'");
	  sleep (1);
	  system ("clear");
	}
      break;
    default:
      break;
    }
}

void
piezas_comidas (int a)
{
  char TorreN[] = "\u265C";
  char AlfilB[] = "\u2657";
  char AlfilN[] = "\u265E";
  char CaballoB[] = "\u2658";	/* Piezas de ajedrez en unicode para imprimirlas cuando se coman */
  char CaballoN[] = "\u265D";
  char ReynaB[] = "\u2655";
  char ReynaN[] = "\u265B";
  char ReyB[] = "\u2654";
  char ReyN[] = "\u265A";
  char PeonB[] = "\u2659";
  char PeonN[] = "\u265F";
  char TorreB[] = "\u2656";
  switch (a)
    {
    case 1:
      printf (" %s ", TorreN);
      break;
    case 2:
      printf (" %s ", TorreB);
      break;
    case 3:
      printf (" %s ", AlfilN);
      break;
    case 4:
      printf (" %s ", AlfilB);
      break;
    case 5:
      printf (" %s ", CaballoN);
      break;
    case 6:
      printf (" %s ", CaballoB);
      break;
    case 7:
      printf (" %s ", PeonN);
      break;
    case 8:
      printf (" %s ", PeonB);
      break;
    case 9:
      printf (" %s ", ReyN);
      break;
    case 10:
      printf (" %s ", ReyB);
      break;
    case 11:
      printf (" %s ", ReynaN);
      break;
    case 12:
      printf (" %s ", ReynaB);
      break;
    default:
      break;
    }
}

void
letreros (int n)
{
  switch (n)
    {
    case 1:
      printf ("\n");
      system ("figlet '.:Ajedrez:.'");
      printf ("\n");
      break;
    default:
      break;
    }
}

void
mostrar_opciones (void)
{
  system ("clear");
  printf ("Escoge el número de opción\n");
  printf ("1) Nueva Partida\n");
  printf ("2) Cargar Partida\n");
  printf ("3) Manual del juego\n");
  printf ("4) Configuración\n");
  printf ("5) Salir\n\n");
}

int
modo (void)
{
  int opcion = 0;
  char buffer[4];

  do
    {
      system ("clear");

      printf ("¿Qué modo de juego desea jugar?\n\n");
      printf ("1) Jugador vs Jugador\n2)Jugador vs IA\n\n");

      fflush (stdin);
      fgets (buffer, 4, stdin);
      sscanf (buffer, "%i", &opcion);
    }
  while (opcion < 1 || opcion > 2);

  return opcion;
}

void
mostrar_menu (struct tablero *un_tablero)
{
  char opcion = '\0';
  int tipo_juego = 0;

  system ("clear");
  mostrar_animacion (ANIMACION_BIENVENIDA);
  letreros (1);

  while (1 == 1)
    {
      mostrar_opciones ();
      opcion = capturar_caracter ();

      switch ((int) opcion)
	{
	case 49:
	  tipo_juego = modo ();
	  jugar (un_tablero, tipo_juego);
	  break;

	case 50:
	  system ("clear");
	  mostrar_animacion (ANIMACION_BIENVENIDA);
	  /* Guardar_Partida ();        No entendí que recibe de argumento */
	  break;

	case 51:
	  system ("clear");
	  manual ();
	  break;
	case 52:
	  system ("clear");
	  setUp ();
	  system ("clear");
	  break;
	case 53:
	  mostrar_animacion (ANIMACION_DESPEDIDA);
	  system ("clear");
	  return;
	  break;
	default:
	  printf
	    ("\nNo ha introducido una opción válida. Intente de nuevo por favor.\n");
	  opcion = '\0';
	  break;
	}
    }
}

void
texto_piezas (void)
{
  printf
    ("Recuerde que el formato de las coordenadas debe ser: 1)Fila en mayúscula, 2)Columna. Sin dejar ningún espacio. La coordenada debe corresponder a la posición de una pieza.\nEjemplo de una coordenada válida: \"H4\"\n\n");
  printf
    ("Introduzca la coordenada de la pieza que desea mover (fila,columna): ");
  return;
}

void
texto_destino (void)
{
  printf
    ("Recuerde que el formato de las coordenadas debe ser: 1)Fila en mayúscula 2)Columna. Sin dejar ningún espacio. \nEjemplo de una coordenada válida: \"H4\"\n\n");
  printf ("\n\nIntroduzca las coordenadas a las que desea mover la pieza: ");
  return;
}

void
iniciar_sesion ()
{
  int resp1 = 0, resp2 = 0;
  char user[99999] = "usuario", password[99999] = "clave";
  char *usuario=(char*)malloc(sizeof(char)*9*9*9*9), *clave=(char*)malloc(sizeof(char)*9*9*9*9);
  char *buffer1=(char*)malloc(sizeof(char)*9*9*9*9), *buffer2=(char*)malloc(sizeof(char)*9*9*9*9);

  printf ("Ingrese usuario ");

  fgets (buffer1, 128, stdin);
  sscanf (buffer1, "%s", usuario);


  printf ("Ingrese clave   ");

  fgets (buffer2, 128, stdin);
  sscanf (buffer2, "%s", clave);

  resp1 = strcmp (user, usuario);
  resp2 = strcmp (password, clave);

  if (resp1 == 0 && resp2 == 0)
    {
      printf ("Bienvenido");
    }
  else
    {
      printf (" Usuario incorrecto ");
    }

}
