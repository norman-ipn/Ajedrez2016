#include <stdio.h>

void
instrucciones (char tablero[8][8])
{
  char a_acento = 160;
  char e_acento = 130;
  char i_acento = 161;
  char o_acento = 162;
  char u_acento = 163;
  char admiracion = 173;
  printf
    ("\n %cBienvenido a Ajedrez-ESCOM!, A continuaci%cn se presentar%cn las instrucciones del juego por si eres nuevo en el ajedrez y deseas aprender las reglas b%csicas de juego \n (Presiona Enter cada vez   que termine una explicaci%cn para continuar) \n",
     admiracion, o_acento, a_acento, a_acento, o_acento);
  while (getchar () != '\n');
  printf
    ("\n El Ajedrez es un juego de estrategia en el que dos jugadores hacen uso de piezas con distintos tipos de movimiento para capturar (comer) a las del rival.\n El objetivo del juego es acorralar   al rey de tal modo que este no pueda moverse a ning%cn lugar sin ser amenazado \n ",
     u_acento);
  while (getchar () != '\n');
  printf
    ("\n El juego comienza en un tablero de 8 x 8  casillas en las que los jugadores deben de mover sus piezas con el fin de capturar las del oponente y darle el jaque mate al rey adversario.\n");

  printf ("  A B C D E F G H  \n");
  printf (" |================|\n");
  printf ("8|%c|%c|%c|%c|%c|%c|%c|%c|\n", tablero[7][0], tablero[7][1],
	  tablero[7][2], tablero[7][3], tablero[7][4], tablero[7][5],
	  tablero[7][6], tablero[7][7]);
  printf ("7|%c|%c|%c|%c|%c|%c|%c|%c|\n", tablero[6][0], tablero[6][1],
	  tablero[6][2], tablero[6][3], tablero[6][4], tablero[6][5],
	  tablero[6][6], tablero[6][7]);
  printf ("6|%c|%c|%c|%c|%c|%c|%c|%c|\n", tablero[5][0], tablero[5][1],
	  tablero[5][2], tablero[5][3], tablero[5][4], tablero[5][5],
	  tablero[5][6], tablero[5][7]);
  printf ("5|%c|%c|%c|%c|%c|%c|%c|%c|\n", tablero[4][0], tablero[4][1],
	  tablero[4][2], tablero[4][3], tablero[4][4], tablero[4][5],
	  tablero[4][6], tablero[4][7]);
  printf ("4|%c|%c|%c|%c|%c|%c|%c|%c|\n", tablero[3][0], tablero[3][1],
	  tablero[3][2], tablero[3][3], tablero[3][4], tablero[3][5],
	  tablero[3][6], tablero[3][7]);
  printf ("3|%c|%c|%c|%c|%c|%c|%c|%c|\n", tablero[2][0], tablero[2][1],
	  tablero[2][2], tablero[2][3], tablero[2][4], tablero[2][5],
	  tablero[2][6], tablero[2][7]);
  printf ("2|%c|%c|%c|%c|%c|%c|%c|%c|\n", tablero[1][0], tablero[1][1],
	  tablero[1][2], tablero[1][3], tablero[1][4], tablero[1][5],
	  tablero[1][6], tablero[1][7]);
  printf ("1|%c|%c|%c|%c|%c|%c|%c|%c|\n", tablero[0][0], tablero[0][1],
	  tablero[0][2], tablero[0][3], tablero[0][4], tablero[0][5],
	  tablero[0][6], tablero[0][7]);
  printf (" |================|\n");

  while (getchar () != '\n');
  printf
    ("\n  Los peones son las principales unidades para cubrir terreno, no son muy fuertes y est%cn pensados m%cs para ocupar posiciones que para capturar, se mueven de la siguiente forma: \n",
     a_acento, a_acento);
  printf
    ("\n El pe%cn puede avanzar 2 casillas y terminar en el caracter # solo si se encuentra en su casilla de arranque. Despu%cs de esto, tendr%c que avanzar 1 casilla a la vez \n o puede hacerlo desde  el inicio. Los 'O' representan las posiciones en las que si una pieza enemiga se encuentra ah%c, esta puede ser capturada.     \n",
     o_acento, e_acento, a_acento, i_acento);

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
    ("\n NOTA: Si un pe%cn consigue llegar hasta la linea del fondo del adversario, este podr%c convertirse en cualquier unidad que se desee, excepto el rey. \n",
     o_acento, a_acento);
  while (getchar () != '\n');

  printf
    ("\n Las Torres son de las unidades m%cs importantes. Se mueven horizontal y verticalmente cuanto quieran y pueden hacer un movimiento con el rey conocido como Enroque. \n",
     a_acento);
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


  printf
    ("\n El Enroque es un movimiento que realiza una torre y el rey en el que cambian de posici%cn de manera conjunta. El rey se mover%c 2 casillas hacia \n la dirreci%cn de la torre con la que enroca y la torre pasar%c a colocarse al lado del rey en la casilla inversa a la direcci%cn a la cual el rey se haya desplazado. \n",
     o_acento, a_acento, o_acento, a_acento, o_acento);

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
    ("\n Cabe decir que el Enroque solo se podr%c realizar cuando se cumplan todas estas condiciones:  \n",
     a_acento);
  printf
    ("\n 1:Tanto el Rey como la Torre no deber%cn haberse movido hasta el momento en el que se ejecute el enroque.  \n",
     a_acento);
  printf
    ("\n 2:Solo se podr%c realizar si ninguna de las piezas est%c amenazada por una del rival. \n",
     a_acento, a_acento);
  printf
    ("\n 3:Ninguna de las casillas por las que pasen deber%c estar amenazada por una pieza enemiga.\n",
     a_acento);
  while (getchar () != '\n');


  printf
    (" \n El Alfil se mueve de manera diagonal hacia las dem%cs casillas cuanto quiera, esta pieza solo se mover%c por un solo color de casillas, as%c que es recomendable usarlo con estrategia. \n",
     a_acento, a_acento, i_acento);

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
  printf (" |================|\n");

  while (getchar () != '\n');

  printf
    (" El caballo es una pieza %ctil para pasar lineas defensivas del oponente, se mueve caminando 3 casillas trazando L's en su camino, tiene la ventaja de que puede saltar \n las piezas, ya sean aliadas o enemigas.  \n",
     u_acento);

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

  while (getchar () != '\n');

  printf
    ("\n La Reina o Dama es la pieza m%cs poderosa de un jugador, combina la forma de movimiento de la torre y el alfil, y al igual que estas dos, puede moverse cuanto quiera.  \n",
     a_acento);

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

  while (getchar () != '\n');

  printf
    ("El Rey es la pieza m%cs importante de un jugador, si es acorralado significar%c la derrota para el jugador, su movimiento es igual al de la reina con la \n particularidad de que solo se mover%c 1 casilla a la vez.\n",
     a_acento, a_acento, a_acento);

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

  while (getchar () != '\n');

  printf ("\n Reglas para el jaque y el jaque-mate  \n");

  while (getchar () != '\n');


  printf
    ("\n Para dar un jaque el rey deber%c ser amenzado por una pieza rival provocando que el jugador est%c obligado a salir de esta situacion, para salir del jaque \n el jugador puede mover al rey a una nueva posicion o, mover una pieza con el fin de obstruir la amenaza y que el rey deje de estar en jaque.  \n",
     a_acento, e_acento);

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

  while (getchar () != '\n');

  printf
    ("EL jaque-mate se dar%c cuando uno de los reyes est%c amenazado por una pieza del oponente y este no pueda moverse u obstruir con otra pieza sin dejar \n de estar amenazado, esto se considerar%c como vitoria para el jugador que lo logre primero antes que el otro.  \n",
     a_acento, e_acento, a_acento);

  printf
    ("\n En este caso, el Rey se encuentra amenazado por la torre y al no poder moverse a otra posici%cn sin ser amenazado debido a la Dama esto es el fin de la partida. \n",
     o_acento);

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

  while (getchar () != '\n');

  return;
}
