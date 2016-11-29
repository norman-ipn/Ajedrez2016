#include <stdio.h>
void
reglas_alfil (void)
{

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
  printf (" |================|\n");
 getchar ();
  return;
}
