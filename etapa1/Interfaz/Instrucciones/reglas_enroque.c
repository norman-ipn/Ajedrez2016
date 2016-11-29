#include <stdio.h>
void
reglas_enroque (void)
{

  printf
    ("\n El Enroque un movimiento que realiza una torre y el rey en el que cambian de posicion de manera conjunta. El rey se movera 2 casillas hacia \n la dirrecion\n");
  printf
    ("\n de la torre con la que enroca y la torre pasará colocarse al lado del rey en la casilla inversa a la dirección a la cual el rey se haya desplazado.\n");

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
    ("\n Cabe decir que el Enroque solo se podrá realizar cuando se cumplan todas estas condiciones:  \n",
     a_acento);
  printf
    ("\n 1:Tanto el Rey como la Torre no deberán haberse movido hasta el momento en el que se ejecute el enroque.  \n",
     a_acento);
  printf
    ("\n 2:Solo se podr%c realizar si ninguna de las piezas está amenazada por una del rival. \n",
     a_acento, a_acento);
  printf
    ("\n 3:Ninguna de las casillas por las que pasen deberá estar amenazada por una pieza enemiga.\n",
     a_acento);
   getchar();
  return;
}
