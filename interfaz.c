#include <stdio.h>
#include "interfaz.h"
void
mostrar_bievenida (void)
{
  system ("clear");
  mostrar_animacion (ANIMACION_BIENVENIDA);
  mostrar_animacion (LETRERO_AJEDREZ);
}

void
mostrar_menu (void)
{
  system ("clear");
  printf ("Escoge el número de opción\n");
  printf ("1) Nueva Partida\n");
  printf ("2) Cargar Partida\n");
  printf ("3) Manual del juego\n");
  printf ("4) Configuración\n");
  printf ("5) Salir\n\n");

}

void
mostrar_animacion (int animacion)
{
  int i = 0;

  switch (animacion)
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
    case LETRERO_AJEDREZ:
      printf ("\n");
      system ("figlet '.:Ajedrez:.'");
      printf ("\n");
      break;
    case LETRERO_CARGANDO:
      for (i = 0; i < 5; i++)
	{
	  system ("clear");
	  system ("figlet 'Cargando'");
	  sleep (1);
	  system ("clear");
	}
      break;

    }

  char capturar_caracter (void)
  {
    char buffer[128];
    fflush (stdin);
    fgets (buffer, 4, stdin);
    return buffer[0];

  }
  void instrucciones_manual (void)
  {
    //Bienvenida a Instrucciones 
    printf
      ("\n ¡Bienvenido a Ajedrez-ESCOM!, A continuación se presentarán las instrucciones del juego por si eres nuevo en el ajedrez y deseas aprender las reglas básicas de juego. \n");
    printf
      ("Presiona Enter cada vez que termine una explicación para continuar\n");
    //Instrucciones
    printf ("\n\n\n\n\nSelecciona una opción de la que quieras saber: ");
    printf
      ("1.Desplegar todas las instrucciones\n2.Caballo\n3.Torre\n4.Peon\n5.Reyna\n6.Alfil\n7.Rey\n8.Enroque\n9.Condiciones de jaque\n0.Condiciones de Jaque-Mate. \n");
  }

  void manual (void)
  {
    char comando = '\0';
    int salida = 0;
    //Vamos a repetir este codigo hasta que el usuario quiera
    do
      {
	instrucciones_manual ();
	comando = capturar_caracter ();

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
	  default:
	    printf ("\n Opción inválida.\n");
	    break;
	  }

	//Se le da la opcion de volver y ver mas instrucciones
	printf
	  ("\n Si quieres ver otra información presiona cualquier tecla\n");
	printf
	  ("\n Si esa es toda la informacion que necesitas y quieres salir de las intrucciones presiona ENTER\n");

	comando = capturar_caracter ();
	if (comando == '\n')
	  {
	    salida = 1;
	  }
      }
    while (!salida);

  }


  void reglas_basicas (void)
  {
    printf
      ("\n El Ajedrez es un juego de estrategia en el que dos jugadores hacen uso de piezas con distintos tipos de movimientos con el objetivo de acorralar al rey de tal modo que este no pueda moverse a ningún lugar mientras esta siendo amenazado, lo que se conoce como jaque mate. \n ");
    while (getchar () != '\n');
    printf
      ("\n El juego comienza en un tablero de 8 x 8 casillas en las que los jugadores deben de mover sus piezas con el fin de darle jaque mate al rey adversario.\n");
    getchar ();
    return;
  }

  void reglas_caballo (void)
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

  void reglas_enroque (void)
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

  void reglas_jaque (void)
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

  void reglas_jaque_mate (void)
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

  void reglas_peon (void)
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

  void reglas_rey (void)
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

  void reglas_reyna (void)
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

  void reglas_torre (void)
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
  void reglas_alfil (void)
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
    getchar ();
    return;
  }

}
