#include <stdio.h>
void
reglas_caballo ()
{
  printf
    ("\n El caballo es una pieza útil para pasar lineas defensivas del oponente, se mueve caminando 3 casillas trazando L's en su camino.\n");
  printf
    ("\n tiene la ventaja de que puede saltar \n las piezas, ya sean aliadas o enemigas. \n");


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
